#pragma once

class aimbot : public singleton<aimbot>
{
public:
	void run(c_usercmd* cmd);

	//initalizers
	//void initalize(c_usercmd* user_cmd);

	//features
	//void run_aimbot(player_t* local, c_usercmd* user_cmd);
	//float gethc(player_t* local);
};