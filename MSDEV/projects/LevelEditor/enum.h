
enum BlockType {GROUND, WATER, REDBLOCK,
	RUSTYREDBLOCK, TEE1, TEE2, TEE3, TEE4, TEE5,
	TEE6, TEE7, MIRROR1, MIRROR2, MIRROR3, MIRROR4,
	NUKE, ENEMYNUKE, STATIC, RUSTY, BARSVERT,
	BARSHORIZ, BARSCROSS, TANK, ENEMYTANK, TANTANK, WHITEBLOCK, TRIANGLE1,
	TRIANGLE2, TRIANGLE3, TRIANGLE4, RUSTYTRIANGLE1,
	RUSTYTRIANGLE2, RUSTYTRIANGLE3, RUSTYTRIANGLE4, RUSTYBARSVERT,
	RUSTYBARSHORIZ, RUSTYWHITEBLOCK};

enum BlockType2 {NONE, TANK_, WATER_, GROUND_, REDBLOCK_,
	ENEMYTANK_, NUKE_, ENEMYNUKE_, MIRROR_, TEE_, STATIC_,
	RUSTYREDBLOCK_, RUSTY_, BARSVERT_, BARSHORIZ_, BARSCROSS_,
	WHITEBLOCK_, TRIANGLE_, RUSTYTRIANGLE_, RUSTYBARSVERT_,
	RUSTYBARSHORIZ_, RUSTYWHITEBLOCK_};

	extern BlockType current_block;
	extern BlockType array[20][15];
	extern BlockType2 blockTypeArray[20][15];
	extern BlockType2 groundTypeArray[20][15];
	extern int groundRotationArray[20][15];
	extern int blockRotationArray[20][15];
	extern int tank_x;
	extern int tank_y;
