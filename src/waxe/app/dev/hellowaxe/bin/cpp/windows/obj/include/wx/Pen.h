#ifndef INCLUDED_wx_Pen
#define INCLUDED_wx_Pen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(wx,Colour)
HX_DECLARE_CLASS1(wx,Pen)
namespace wx{


class Pen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Pen_obj OBJ_;
		Pen_obj();
		Void __construct(::wx::Colour inColour,hx::Null< int >  __o_inWidth,hx::Null< int >  __o_inStyle);

	public:
		static hx::ObjectPtr< Pen_obj > __new(::wx::Colour inColour,hx::Null< int >  __o_inWidth,hx::Null< int >  __o_inStyle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Pen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Pen"); }

		virtual Dynamic wxGetHandle( );
		Dynamic wxGetHandle_dyn();

		Dynamic wxHandle; /* REM */ 
		static int SOLID; /* REM */ 
		static int DOT; /* REM */ 
		static int LONG_DASH; /* REM */ 
		static int SHORT_DASH; /* REM */ 
		static int DOT_DASH; /* REM */ 
		static int USER_DASH; /* REM */ 
		static int TRANSPARENT; /* REM */ 
		static Dynamic wx_pen_create; /* REM */ 
		static Dynamic &wx_pen_create_dyn() { return wx_pen_create;}
};

} // end namespace wx

#endif /* INCLUDED_wx_Pen */ 
