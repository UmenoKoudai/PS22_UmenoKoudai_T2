#pragma once

namespace constnts {
	namespace BackGround {
		const Size BLOCK_SIZE{ 50, 50 };
		const int MAPSIZE_X = 100;
		const int MAPSIZE_Y = 100;
		const int MAX = MAPSIZE_X * MAPSIZE_Y;
	}
}

class BackGround{
	Rect map[constnts::BackGround::MAX];

	BackGround() {
	}
};
