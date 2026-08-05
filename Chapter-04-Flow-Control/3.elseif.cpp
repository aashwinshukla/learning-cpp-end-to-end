const int Pen { 10 };
const int Marker { 20 };
const int Eraser { 30 };
const int Rectangle { 40 };
const int Circle { 50 };
const int Ellipse { 60 };


int tool { Ellipse };

if(tool == Pen){
    std::cout << "Active tool is pen "<< std::endl;
}else if( tool == Marker ){
    std::cout << "Active tool is marker "<< std::endl;    
}else if( tool == Eraser ){
    std::cout << "Active tool is Earser "<< std::endl;    
}else if( tool == Rectangle ){
    std::cout << "Active tool is Rectangle "<< std::endl;    
}else if( tool == Circle ){
    std::cout << "Active tool is Circle "<< std::endl;       
}else if( tool == Ellipse){
     std::cout << "Active tool is Ellipse "<< std::endl;    
}else{
     std::cout << "No tool active "<< std::endl;    
}

// above is a good example to describe how else if statment works using multiple conditions

