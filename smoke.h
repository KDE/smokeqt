/*
 *   Copyright (C) 2002, Ashley Winters <qaqortog@nwlink.com>
 */

class Smoke {
public:
    class Stack;		// To be written
    typedef short Index;
    typedef void (*ClassFn)(Index method, void* obj, Stack* args);
    typedef void* (*CastFn)(void* obj, Index from, Index to);
    typedef void (*DestructorCallbackFn)(void* obj);

    /**
     * Describe one class.
     */
    struct Class {
	const char *className;	// Name of the class
	Index parents;		// Index into inheritanceList
	ClassFn classFn;	// Calls any method in the class
    };

    enum MethodFlags {
        mf_static = 0x01,
        mf_const = 0x02
    };
    /**
     * Describe one method of one class.
     */
    struct Method {
	Index classId;		// Index into classes
	Index name;		// Index into methodNames; real name
	Index args;		// Index into argumentList
	unsigned char numArgs;	// Number of arguments
	unsigned char flags;	// MethodFlags (const/static/etc...)
	Index ret;		// Index into types for the return type
	Index method;		// Passed to Class.classFn, to call method
    };

    /**
     * One MethodMap entry maps the munged method prototype
     * to the Method entry.
     *
     * The munging works this way:
     * $ is a plain scalar
     * # is an object
     * ? is a non-scalar (reference to array or hash, undef)
     *
     * e.g. QApplication(int &, char **) becomes QApplication$?
     */
    struct MethodMap {
	Index classId;		// Index into classes
	Index name;		// Index into methodNames; munged name
	Index method;		// Index into methods
    };

    enum TypeFlags {
	// Always only one of the next three flags should be set
	tf_stack = 0x01, 	// Stored on the stack, 'type'
	tf_ptr = 0x02,   	// Pointer, 'type*'
	tf_ref = 0x03,   	// Reference, 'type&'
	// Can | whatever ones of these apply
	tf_class = 0x04, 	// is class
	tf_enum = 0x08,  	// is enum
	tf_copy = 0x10,   	// use new allocated copy (pass by value)
    };
    /**
     * One Type entry is one argument type needed by a method.
     * Type entries are shared, there is only one entry for "int" etc.
     */
    struct Type {
	const char *name;	// Stringified type name
	Index classId;		// Index into classes. -1 for none
        unsigned short flags;   // TypeFlags
    };

    // We could just pass everything around using void* (pass-by-reference)
    // I don't want to, though. -aw
    union StackItem {
	bool s_bool;
	char s_char;
	unsigned char s_uchar;
	short s_short;
	unsigned short s_ushort;
	int s_int;
	unsigned int s_uint;
	long s_long;
	unsigned long s_ulong;
	float s_float;
	double s_double;
	void* s_voidp;
    };
    enum {
	t_void,
	t_bool,
	t_char,
	t_uchar,
	t_short,
	t_ushort,
	t_int,
	t_uint,
	t_long,
	t_ulong,
	t_float,
	t_double,
	t_last,		// number of pre-defined types
    };
 

    // Passed to constructor
    /**
     * The classes array defines every class for this module
     */
    Class *classes;
    Index numClasses;

    /**
     * The methods array defines every method in every class for this module
     */
    Method *methods;
    Index numMethods;

    /**
     * methodMaps maps the munged method prototypes
     * to the methods entries.
     */
    MethodMap *methodMaps;
    Index numMethodMaps;

    /**
     * List of all types needed by the methods (arguments and return values)
     */
    Type *types;
    Index numTypes;

    /**
     * Groups of class IDs (-1 separated) used as super class lists.
     * For classes with super classes: Class.parents = index into this array.
     */
    Index *inheritanceList;
    /**
     * Groups of type IDs (-1 separated), describing the types of argument for a method.
     * Method.args = index into this array.
     */
    Index *argumentList;
    /**
     * Groups of method prototypes with the same number of arguments, but different types.
     * Used to resolve overloading.
     */
    Index *ambiguousMethodList;
    /**
     * Array of method names, for Method.name and MethodMap.name
     */
    const char **methodNames;

    /**
     * Function used for casting from/to the classes defined by this module.
     */ 
    CastFn castFn;

    // Not passed to constructor
    DestructorCallbackFn destructorCallbackFn;

    /** 
     * Constructor
     */
    Smoke(Class *_classes, Index _numClasses,
	  Method *_methods, Index _numMethods,
	  MethodMap *_methodMaps, Index _numMethodMaps,
	  Type *_types, Index _numTypes,
	  Index *_inheritanceList,
	  Index *_argumentList,
	  Index *_ambiguousMethodList,
	  const char **_methodNames,
	  CastFn _castFn) :
		classes(_classes), numClasses(_numClasses),
		methods(_methods), numMethods(_numMethods),
		methodMaps(_methodMaps), numMethodMaps(_numMethodMaps),
		types(_types), numTypes(_numTypes),
		inheritanceList(_inheritanceList),
		argumentList(_argumentList),
		ambiguousMethodList(_ambiguousMethodList),
		methodNames(_methodNames),
		castFn(_castFn),

		destructorCallbackFn(0)
		{}
};
