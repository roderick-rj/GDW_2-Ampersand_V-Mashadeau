#include "areas/AIN_A/AIN_A00.h" // remember to change the file name and the second sub folder (in this case, AIN_X) to the appropriate locations


// using an initalizer list with the variables, caused problems, so a test background is loaded in. These are replaced later.
world::AIN_A00::AIN_A00() : Area("")
{
	bool flipY = true; // flip the tiles and enemies positions on the y-axis

	name = "A00";
	Area::setBackgroundLayer1(bg_img1);
	Area::setBackgroundLayer2(bg_img2);
	Area::setBackgroundLayer3(bg_img3);
	Area::setForegroundLayer(fg_img);

	// there is a default gravity for all areas, so this line isn't required. However, if you want custom gravity for your area, you change it here.
	// setGravity(200.0F); // sets the level of gravity in the scene. This should NOT be negative.

	// setting all of the exits. Format: AIN_###_#
	// - the last digit (after the second underscore) determines what spawn point to use.
	exit0 = "AIN_A01_0";
	exit1 = "";
	exit2 = "";
	exit3 = "";
	exit4 = "";

	// setting all of the spawn points. These are based on the middle of the sprite.
	spawn0 = Vec2(1088.0f, 512.0f);
	spawn1 = Vec2(0.0F, 0.0F);
	spawn2 = Vec2(0.0F, 0.0F);
	spawn3 = Vec2(0.0F, 0.0F);
	spawn4 = Vec2(0.0F, 0.0F);

	Area::tileArrayToVector(tileGrid, flipY); // set to 'true' to flip the tiles along the y-axis
	Area::enemyArrayToVector(enemyGrid, flipY); // set to 'true' to flip the enemies along the y-axis.
}