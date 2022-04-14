
        //Shishir Bishwokarma //UTA ID 1001644424 //CSE 1325
    #ifndef	THREE_IMAGE_H	
    #define	THREE_IMAGE_H	

    #include	<gtkmm.h>

    class	Three_image	:	public	Gtk::Window

    {

    public:				
        Three_image();				
        virtual	~Three_image();	

        protected:					
        //signal	handlers			
        void display_image1();			
        void display_image2();
        void display_image3();



    //widgets
    Gtk::Image image;					
    Gtk::Button	button_image1,	button_image2, button_image3, quit;		
    Gtk::Grid grid;	
        

    } ;

    #endif 

        