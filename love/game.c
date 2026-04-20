//cc game.c libraylib.a -framework Cocoa -framework IOKit
//./a.out
#include"raylib.h"

int main(){
    InitWindow(800,600,"love jamp!");
    SetTargetFPS( 60 );
    
    int y=300;
    int ys=20;

    int tx = 800;

while( !WindowShouldClose() ){
    
    BeginDrawing();
        
    if(IsKeyPressed(KEY_SPACE)){
        ys = 20;
    }
    y= y-ys;
    if(600-40 < y){
        y= 600-40;
        ys= 0;
    
    }else{
        ys = ys-1;
    }

    tx =tx -2;

    int 💀 = CheckCollisionCircles(
        (Vector2){400, y}, 40,
        (Vector2){tx,600-40}, 40
    );

    if( 💀 ){
        break;
    }
    ClearBackground(PINK);
        DrawCircle(tx,600-40,40,BLACK);
         DrawCircle(400,y,40, SKYBLUE);
        
    EndDrawing();
}
    CloseWindow();
    return 0;
}