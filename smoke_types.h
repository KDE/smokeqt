#ifndef XQT_H
#define XQT_H

#include <qglobal.h> // for uint etc.
class QObject;
class QUObject;
class QMetaObject;

// TODO
bool x_perl_emit(QObject*, int, QUObject*);
bool x_perl_invoke(QObject*, int, QUObject*);
QMetaObject *x_perl_metaObject(const QObject*, QMetaObject*);

// A simple "variant" type (union of basic types)
union xargs {
    void *x_voidp;
    char x_char;
    int x_int;
    long x_long;
    float x_float;
    double x_double;
    bool x_bool;
    uint x_uint;
    ulong x_ulong;
    ushort x_ushort;
};
void *xtypecast(void *, int, int);
typedef void (*xcallfunc)(xargs*, void*, int);

bool call_method(void*, int, xargs *);
void call_method_abstract(void*, int, xargs *);

struct xobject {
    void *xptr;
    int xclass;
};

enum Qt_type {
    T__void,
    T_unknown,
    T_unknownR,
    T_unknownP,
    T__class,
    T__classR,
    T__classP,
    T__char,
    T__charR,
    T__charP,
    T__int,
    T__intR,
    T__intP,
    T__long,
    T__longR,
    T__longP,
    T__float,
    T__floatR,
    T__floatP,
    T__double,
    T__doubleR,
    T__doubleP,
    T__bool,
    T__boolR,
    T__boolP,
    T__uchar,
    T__ucharP,
    T__uint,
    T__ushort,
    T__ulong,
    T__enum,
    T__voidP,
    T__QString,
    T__QStringR,
    T__QStringP,
    T__QCString,
    T__QCStringR,
    T__QCStringP,
    T__charPP,
    T__signalClassP,
    T__signalCharP,
    T__slotClassP,
    T__slotCharP,

    T_Qt_last,
    T__const = 0x4000,		// some flags to be ored in
    T__static = 0x2000,
    T__new = 0x1000,		// not sure how to implement this yet
    T_argcnt = 0x0FFF
};


/*
 * The xmethod array defines every method in every class
 *
 * Note about argcnt:
 * I'm unwilling to spend umpteen kilobytes on a const/static flag
 * so I will OR it into the argcnt parameter which only needs the
 * bottom 5 bits anyways. If I trusted :1 more, I'd use that instead.
 */
struct xmethod {
    short name;    // REAL name, not psuedo
    short c;       // class
    short argcnt;  // not only the number of arguments, but const/staticness
    short args;	   // argument list...
    short ret;     // return type
    short retc;    // class, just in case
    short idx;     // xcall() index
};

/* The xmethodmap array maps the munged method prototype
 * to the xmethod entries for the method.
 *
 * The munging works this way:
 * $ is a plain scalar
 * # is an object
 * ? is a non-scalar (reference to array or hash, undef)
 * 
 * e.g. QApplication(int &, char **) becomes QApplication$?
 */
struct xmethodmap {
    short name;    // munged name
    short c;	   // class
    short meth;    // method def
};

/*
 * The xarg array contains every combination of every argument
 */
struct xarg {
    short t;    // type
    short c;    // class, if any
};

/*
 * The xinherit array contains the inheritance tree.
 *
 * Array index: the class number, in the xobject array
 * Struct contents: the two superclasses s1 and s2 (or -1 if no superclass).
 * where s1 and s2 are indexes in the xobject array too.
 *
 * This limits to two superclasses per class though... do we need more?
 */
struct xinherit {
    short s1;	// first superclass
    short s2;   // second superclass
};

// ### We might want to have an instance of those for Qt, and another instance
// of them for KDE.
extern xcallfunc xfunclist[];
extern const char *classlist[];
extern const char *methodlist[];
extern xmethod methods[];
extern xmethodmap methodmap[];
extern xarg arglist[];
extern xinherit inheritancelist[];

#endif
