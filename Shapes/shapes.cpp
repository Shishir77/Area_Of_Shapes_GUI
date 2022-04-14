
    //Shishir Bishwokarma //UTA ID 1001644424 //CSE 1325
    #include	"shapes.h"
    #include	<iostream>	


    Three_image::Three_image()	{

        set_border_width(30);	

        image.set("Start.png");					
            grid.attach(image,0,0,3,1);	

            button_image1.add_label("Circle");		
            button_image1.signal_pressed().connect(sigc::mem_fun(*this,&Three_image::display_image1));				
            grid.attach(button_image1,0,1,1,1);	


                button_image2.add_label("Triangle");				
                button_image2.signal_pressed().connect(sigc::mem_fun(*this,&Three_image::display_image2));			
                grid.attach(button_image2,1,1,1,1);	


            button_image3.add_label("Rectangle");				
                button_image3.signal_pressed().connect(sigc::mem_fun(*this,&Three_image::display_image3));			
            grid.attach(button_image3,2,1,1,1);	

                quit.add_label("Quit");				
                quit.signal_pressed().connect(sigc::mem_fun(*this,&Three_image::close));				
                grid.attach(quit,0,2,3,1);

                    grid.show_all();	

            add(grid);

        
    }

    Three_image::~Three_image()
        {}	

        void	Three_image::display_image1()
            {image.set("A.png");	
            }	
        
        void	Three_image::display_image2()	
        { 
            image.set("B.jpg");	
        }	


        void	Three_image::display_image3()	
        { 
            image.set("C.jpg");	
        }	
        
