/*
    Author - HoverGuy
    GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
	
    Defines available gear shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class ShopCategory - Shop category, can only be Glasses/Headgear/Uniform/Vest/Backpack/MissileLauncher/RocketLauncher/Handgun/AssaultRifle/MachineGun/SubmachineGun/SniperRifle
		{
			content - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the item appears in the list else no
		};
	};
*/

class HG_DefaultShop 
{
    conditionToAccess = "true"; 

    class AssaultRifle
    {
        displayName = "$STR_HG_SHOP_ASSAULT_RIFLE";
        content[] =
        {
            {"arifle_AK12_F",3000,"true"},
            {"arifle_AK12_GL_F",3000,"true"},
            {"arifle_AKM_F",3000,"true"},
            {"arifle_AKM_FL_F",3000,"true"},
            {"arifle_AKS_F",3000,"true"},
            {"arifle_ARX_blk_F",3000,"true"},
            {"arifle_ARX_ghex_F",3000,"true"},
            {"arifle_ARX_hex_F",3000,"true"},
            {"arifle_CTAR_blk_F",3000,"true"},
            {"arifle_CTAR_ghex_F",3000,"true"},
            {"arifle_CTAR_GL_blk_F",3000,"true"},
            {"arifle_CTAR_GL_ghex_F",3000,"true"},
            {"arifle_CTAR_GL_hex_F",3000,"true"},
            {"arifle_CTAR_hex_F",3000,"true"},
            {"arifle_CTARS_blk_F",3000,"true"},
            {"arifle_CTARS_ghex_F",3000,"true"},
            {"arifle_CTARS_hex_F",3000,"true"},
            {"arifle_Katiba_C_F",3000,"true"},
            {"arifle_Katiba_F",3000,"true"},
            {"arifle_Katiba_GL_F",3000,"true"},
            {"arifle_Mk20_F",3000,"true"},
            {"arifle_Mk20_GL_F",3000,"true"},
            {"arifle_Mk20_GL_plain_F",3000,"true"},
            {"arifle_Mk20_plain_F",3000,"true"},
            {"arifle_Mk20C_F",3000,"true"},
            {"arifle_Mk20C_plain_F",3000,"true"},
            {"arifle_MX_Black_F",3000,"true"},
            {"arifle_MX_F",3000,"true"},
            {"arifle_MX_GL_Black_F",3000,"true"},
            {"arifle_MX_GL_F",3000,"true"},
            {"arifle_MX_GL_khk_F",3000,"true"},
            {"arifle_MX_khk_F",3000,"true"},
            {"arifle_MX_SW_Black_F",3000,"true"},
            {"arifle_MX_SW_F",3000,"true"},
            {"arifle_MX_SW_khk_F",3000,"true"},
            {"arifle_MXC_Black_F",3000,"true"},
            {"arifle_MXC_F",3000,"true"},
            {"arifle_MXC_khk_F",3000,"true"},
            {"arifle_MXM_Black_F",3000,"true"},
            {"arifle_MXM_F",3000,"true"},
            {"arifle_MXM_khk_F",3000,"true"},
            {"arifle_SDAR_F",3000,"true"},
            {"arifle_SPAR_01_blk_F",3000,"true"},
            {"arifle_SPAR_01_GL_blk_F",3000,"true"},
            {"arifle_SPAR_01_GL_khk_F",3000,"true"},
            {"arifle_SPAR_01_GL_snd_F",3000,"true"},
            {"arifle_SPAR_01_khk_F",3000,"true"},
            {"arifle_SPAR_01_snd_F",3000,"true"},
            {"arifle_SPAR_02_blk_F",3000,"true"},
            {"arifle_SPAR_02_khk_F",3000,"true"},
            {"arifle_SPAR_02_snd_F",3000,"true"},
            {"arifle_SPAR_03_blk_F",3000,"true"},
            {"arifle_SPAR_03_khk_F",3000,"true"},
            {"arifle_SPAR_03_snd_F",3000,"true"},
            {"arifle_TRG20_F",3000,"true"},
            {"arifle_TRG21_F",3000,"true"},
            {"arifle_TRG21_GL_F",3000,"true"}
        };
    };

    class Handgun
    {
        displayName = "$STR_HG_SHOP_HANDGUN";
        content[] =
        {
            {"hgun_ACPC2_F",1000,"true"},
            {"hgun_P07_F",1000,"true"},
            {"hgun_P07_khk_F",1000,"true"},
            {"hgun_PDW2000_F",1000,"true"},
            {"hgun_Pistol_01_F",1000,"true"},
            {"hgun_Pistol_heavy_01_F",1000,"true"},
            {"hgun_Pistol_heavy_02_F",1000,"true"},
            {"hgun_Pistol_Signal_F",1000,"true"},
            {"hgun_Rook40_F",1000,"true"}
        };
    };

    class MissileLauncher
    {
        displayName = "$STR_HG_SHOP_MISSILE_LAUNCHER";
        content[] =
        {
            {"launch_B_Titan_F",10000,"true"},
            {"launch_B_Titan_short_F",10000,"true"},
            {"launch_B_Titan_short_tna_F",10000,"true"},
            {"launch_B_Titan_tna_F",10000,"true"},
            {"launch_I_Titan_F",10000,"true"},
            {"launch_I_Titan_short_F",10000,"true"},
            {"launch_O_Titan_F",10000,"true"},
            {"launch_O_Titan_ghex_F",10000,"true"},
            {"launch_O_Titan_short_F",10000,"true"},
            {"launch_O_Titan_short_ghex_F",10000,"true"},
            {"launch_Titan_F",10000,"true"},
            {"launch_Titan_short_F",10000,"true"}
        };
    };

    class RocketLauncher
    {
        displayName = "$STR_HG_SHOP_ROCKET_LAUNCHER";
        content[] =
        {
            {"launch_NLAW_F",10000,"true"},
            {"launch_RPG32_F",10000,"true"},
            {"launch_RPG32_ghex_F",10000,"true"},
            {"launch_RPG7_F",10000,"true"}
        };
    };

    class MachineGun
    {
        displayName = "$STR_HG_SHOP_MACHINE_GUN";
        content[] =
        {
            {"LMG_03_F",5000,"true"},
            {"LMG_Mk200_BI_F",5000,"true"},
            {"LMG_Mk200_F",5000,"true"},
            {"LMG_Zafir_F",5000,"true"}
        };
    };

    class SniperRifle
    {
        displayName = "$STR_HG_SHOP_SNIPER_RIFLE";
        content[] =
        {
            {"srifle_DMR_01_F",4000,"true"},
            {"srifle_DMR_02_camo_F",4000,"true"},
            {"srifle_DMR_02_F",4000,"true"},
            {"srifle_DMR_02_sniper_F",4000,"true"},
            {"srifle_DMR_03_F",4000,"true"},
            {"srifle_DMR_03_khaki_F",4000,"true"},
            {"srifle_DMR_03_multicam_F",4000,"true"},
            {"srifle_DMR_03_tan_F",4000,"true"},
            {"srifle_DMR_03_woodland_F",4000,"true"},
            {"srifle_DMR_04_F",4000,"true"},
            {"srifle_DMR_04_Tan_F",4000,"true"},
            {"srifle_DMR_05_blk_F",4000,"true"},
            {"srifle_DMR_05_hex_F",4000,"true"},
            {"srifle_DMR_05_tan_F",4000,"true"},
            {"srifle_DMR_06_camo_F",4000,"true"},
            {"srifle_DMR_06_olive_F",4000,"true"},
            {"srifle_DMR_07_blk_F",4000,"true"},
            {"srifle_DMR_07_ghex_F",4000,"true"},
            {"srifle_DMR_07_hex_F",4000,"true"},
            {"srifle_EBR_F",4000,"true"},
            {"srifle_GM6_camo_F",4000,"true"},
            {"srifle_GM6_F",4000,"true"},
            {"srifle_GM6_ghex_F",4000,"true"},
            {"srifle_LRR_camo_F",4000,"true"},
            {"srifle_LRR_F",4000,"true"},
            {"srifle_LRR_tna_F",4000,"true"}
        };
    };

    class SubmachineGun
    {
        displayName = "$STR_HG_SHOP_SUB_MACHINE_GUN";
        content[] =
        {
            {"SMG_01_F",3000,"true"},
            {"SMG_02_F",3000,"true"},
            {"SMG_05_F",3000,"true"}
        };
    };

    class Glasses
    {
        displayName = "$STR_HG_SHOP_FACEWEARS";
        content[] =
        {
            {"G_Balaclava_blk",300,"true"},
            {"G_Balaclava_combat",300,"true"},
            {"G_Balaclava_lowprofile",300,"true"},
            {"G_Balaclava_oli",300,"true"},
            {"G_Bandanna_aviator",300,"true"},
            {"G_Bandanna_beast",300,"true"},
            {"G_Bandanna_blk",300,"true"},
            {"G_Bandanna_khk",300,"true"},
            {"G_Bandanna_oli",300,"true"},
            {"G_Bandanna_shades",300,"true"},
            {"G_Bandanna_sport",300,"true"},
            {"G_Bandanna_tan",300,"true"},
            {"G_Balaclava_TI_G_blk_F",300,"true"},
            {"G_Balaclava_TI_blk_F",300,"true"},
            {"G_Balaclava_TI_G_tna_F",300,"true"},
            {"G_Balaclava_TI_tna_F",300,"true"},
            {"G_Tactical_Clear",300,"true"},
            {"G_Tactical_Black",300,"true"},
            {"G_Diving",400,"true"},
            {"G_I_Diving",400,"true"},
            {"G_O_Diving",400,"true"},
            {"G_B_Diving",400,"true"},
            {"G_Goggles_VR",400,"true"},
            {"G_Aviator",200,"true"},
            {"G_Shades_Black",200,"true"},
            {"G_Shades_Blue",200,"true"},
            {"G_Shades_Green",200,"true"},
            {"G_Shades_Red",200,"true"},
            {"G_Sport_Red",200,"true"},
            {"G_Sport_Blackyellow",200,"true"},
            {"G_Sport_BlackWhite",200,"true"},
            {"G_Sport_Checkered",200,"true"},
            {"G_Sport_Blackred",200,"true"},
            {"G_Sport_Greenblack",200,"true"},
            {"G_Squares_Tinted",200,"true"},
            {"G_Squares",200,"true"},
            {"G_Lady_Blue",100,"true"},
            {"G_Lady_Red",100,"true"},
            {"G_Lady_Mirror",100,"true"},
            {"G_Lady_Dark",100,"true"},
            {"G_Lowprofile",100,"true"},
            {"G_Spectacles",100,"true"},
            {"G_Spectacles_Tinted",100,"true"}
        };
    };

    class Headgear
    {
        displayName = "$STR_HG_SHOP_HEADGEARS";
        content[] =
        {
            {"H_HelmetB_light_grass",1500,"true"},
            {"H_HelmetSpecO_blk",600,"true"},
            {"H_HelmetSpecO_ghex_F",600,"true"},
            {"H_HelmetSpecO_ocamo",600,"true"},
            {"H_HelmetB_black",600,"true"},
            {"H_HelmetB_camo",600,"true"},
            {"H_HelmetB_desert",600,"true"},
            {"H_HelmetB_grass",600,"true"},
            {"H_HelmetB_sand",600,"true"},
            {"H_HelmetB_snakeskin",600,"true"},
            {"H_HelmetB_tna_F",600,"true"},
            {"H_HelmetSpecB",600,"true"},
            {"H_HelmetSpecB_blk",600,"true"},
            {"H_HelmetSpecB_paint2",600,"true"},
            {"H_HelmetSpecB_paint1",600,"true"},
            {"H_HelmetSpecB_sand",600,"true"},
            {"H_HelmetSpecB_snakeskin",600,"true"},
            {"H_HelmetB_Enh_tna_F",600,"true"},
            {"H_HelmetO_ViperSP_ghex_F",600,"true"},
            {"H_HelmetO_ViperSP_hex_F",600,"true"},
            {"H_HelmetB_TI_tna_F",600,"true"},
            {"H_HelmetCrew_O_ghex_F",400,"true"},
            {"H_HelmetCrew_I",400,"true"},
            {"H_HelmetCrew_O",400,"true"},
            {"H_HelmetCrew_B",400,"true"},
            {"H_HelmetLeaderO_ghex_F",400,"true"},
            {"H_HelmetLeaderO_ocamo",400,"true"},
            {"H_HelmetLeaderO_oucamo",400,"true"},
            {"H_CrewHelmetHeli_I",400,"true"},
            {"H_CrewHelmetHeli_O",400,"true"},
            {"H_CrewHelmetHeli_B",400,"true"},
            {"H_PilotHelmetHeli_I",400,"true"},
            {"H_PilotHelmetHeli_O",400,"true"},
            {"H_PilotHelmetHeli_B",400,"true"},
            {"H_HelmetB_light",400,"true"},
            {"H_HelmetB_light_black",400,"true"},
            {"H_HelmetB_light_desert",400,"true"},
            {"H_HelmetB_light_grass",400,"true"},
            {"H_HelmetB_light_sand",400,"true"},
            {"H_HelmetB_light_snakeskin",400,"true"},
            {"H_HelmetB_Light_tna_F",400,"true"},
            {"H_HelmetIA",400,"true"},
            {"H_PilotHelmetFighter_I",400,"true"},
            {"H_PilotHelmetFighter_O",400,"true"},
            {"H_PilotHelmetFighter_B",400,"true"},
            {"H_HelmetO_ghex_F",400,"true"},
            {"H_HelmetO_ocamo",400,"true"},
            {"H_HelmetO_oucamo",400,"true"},
            {"H_Bandanna_gry",200,"true"},
            {"H_Bandanna_blu",200,"true"},
            {"H_Bandanna_cbr",200,"true"},
            {"H_Bandanna_khk_hs",200,"true"},
            {"H_Bandanna_khk",200,"true"},
            {"H_Bandanna_mcamo",200,"true"},
            {"H_Bandanna_sgg",200,"true"},
            {"H_Bandanna_sand",200,"true"},
            {"H_Bandanna_surfer_blk",200,"true"},
            {"H_Bandanna_surfer_grn",200,"true"},
            {"H_Bandanna_surfer",200,"true"},
            {"H_Bandanna_camo",200,"true"},
            {"H_Watchcap_blk",200,"true"},
            {"H_Watchcap_cbr",200,"true"},
            {"H_Watchcap_camo",200,"true"},
            {"H_Watchcap_khk",200,"true"},
            {"H_Booniehat_khk_hs",200,"true"},
            {"H_Booniehat_khk",200,"true"},
            {"H_Booniehat_mcamo",200,"true"},
            {"H_Booniehat_oli",200,"true"},
            {"H_Booniehat_tan",200,"true"},
            {"H_Booniehat_tna_F",200,"true"},
            {"H_Booniehat_dgtl",200,"true"},
            {"H_Cap_grn_BI",200,"true"},
            {"H_Cap_blk",200,"true"},
            {"H_Cap_blu",200,"true"},
            {"H_Cap_blk_CMMG",200,"true"},
            {"H_Cap_grn",200,"true"},
            {"H_Cap_blk_ION",200,"true"},
            {"H_Cap_oli_hs",200,"true"},
            {"H_Cap_oli",200,"true"},
            {"H_Cap_police",200,"true"},
            {"H_Cap_press",200,"true"},
            {"H_Cap_red",200,"true"},
            {"H_Cap_surfer",200,"true"},
            {"H_Cap_tan",200,"true"},
            {"H_Cap_khaki_specops_UK",200,"true"},
            {"H_Cap_usblack",200,"true"},
            {"H_Cap_tan_specops_US",200,"true"},
            {"H_Cap_blk_Raven",200,"true"},
            {"H_Cap_brn_SPECOPS",200,"true"},
            {"H_RacingHelmet_1_black_F",300,"true"},
            {"H_RacingHelmet_1_blue_F",300,"true"},
            {"H_RacingHelmet_2_F",300,"true"},
            {"H_RacingHelmet_1_F",300,"true"},
            {"H_RacingHelmet_1_green_F",300,"true"},
            {"H_RacingHelmet_1_orange_F",300,"true"},
            {"H_RacingHelmet_1_red_F",300,"true"},
            {"H_RacingHelmet_3_F",300,"true"},
            {"H_RacingHelmet_4_F",300,"true"},
            {"H_RacingHelmet_1_white_F",300,"true"},
            {"H_RacingHelmet_1_yellow_F",300,"true"},
            {"H_Cap_headphones",300,"true"},
            {"H_Shemag_olive_hs",300,"true"},
            {"H_Shemag_olive",300,"true"},
            {"H_ShemagOpen_tan",300,"true"},
            {"H_ShemagOpen_khk",300,"true"},
            {"H_Helmet_Skate",300,"true"},
            {"H_Beret_blk",300,"true"},
            {"H_Beret_gen_F",300,"true"},
            {"H_Beret_02",300,"true"},
            {"H_Beret_Colonel",300,"true"},
            {"H_Cap_marshal",300,"true"},
            {"H_MilCap_blue",300,"true"},
            {"H_MilCap_gen_F",300,"true"},
            {"H_MilCap_ghex_F",300,"true"},
            {"H_MilCap_gry",300,"true"},
            {"H_MilCap_ocamo",300,"true"},
            {"H_MilCap_mcamo",300,"true"},
            {"H_MilCap_tna_F",300,"true"},
            {"H_MilCap_dgtl",300,"true"},
            {"H_Hat_blue",100,"true"},
            {"H_Hat_brown",100,"true"},
            {"H_Hat_camo",100,"true"},
            {"H_Hat_checker",100,"true"},
            {"H_Hat_grey",100,"true"},
            {"H_Hat_tan",100,"true"},
            {"H_StrawHat",100,"true"},
            {"H_StrawHat_dark",100,"true"}
        };
    };

    class Uniform
    {
        displayName = "$STR_HG_SHOP_UNIFORMS";
        content[] =
        {
            {"U_B_CombatUniform_mcam",600,"true"},
            {"U_B_CombatUniform_wdl",600,"true"},
            {"U_B_CombatUniform_sgg",600,"true"},
            {"U_B_CombatUniform_mcam_tshirt",600,"true"},
            {"U_B_CombatUniform_wdl_tshirt",600,"true"},
            {"U_B_CombatUniform_sgg_tshirt",600,"true"},
            {"U_I_CombatUniform",600,"true"},
            {"U_I_CombatUniform_tshirt",600,"true"},
            {"U_I_OfficerUniform",600,"true"},
            {"U_I_CombatUniform_shortsleeve",600,"true"},
            {"U_O_T_Soldier_F",600,"true"},
            {"U_O_CombatUniform_ocamo",600,"true"},
            {"U_O_CombatUniform_oucamo",600,"true"},
            {"U_I_FullGhillie_ard",600,"true"},
            {"U_O_FullGhillie_ard",600,"true"},
            {"U_B_FullGhillie_ard",600,"true"},
            {"U_O_T_FullGhillie_tna_F",600,"true"},
            {"U_B_T_FullGhillie_tna_F",600,"true"},
            {"U_I_FullGhillie_lsh",600,"true"},
            {"U_O_FullGhillie_lsh",600,"true"},
            {"U_B_FullGhillie_lsh",600,"true"},
            {"U_I_FullGhillie_sard",600,"true"},
            {"U_O_FullGhillie_sard",600,"true"},
            {"U_B_FullGhillie_sard",600,"true"},
            {"U_B_GEN_Commander_F",600,"true"},
            {"U_B_GEN_Soldier_F",600,"true"},
            {"U_O_T_Sniper_F",600,"true"},
            {"U_B_T_Sniper_F",600,"true"},
            {"U_I_GhillieSuit",600,"true"},
            {"U_O_GhillieSuit",600,"true"},
            {"U_B_GhillieSuit",600,"true"},
            {"U_B_CombatUniform_mcam_vest",600,"true"},
            {"U_B_CombatUniform_wdl_vest",600,"true"},
            {"U_B_CombatUniform_sgg_vest",600,"true"},
            {"U_B_T_Soldier_SL_F",600,"true"},
            {"U_B_CTRG_1",500,"true"},
            {"U_B_CTRG_3",500,"true"},
            {"U_B_CTRG_2",500,"true"},
            {"U_B_CTRG_Soldier_F",500,"true"},
            {"U_B_CTRG_Soldier_3_F",500,"true"},
            {"U_B_CTRG_Soldier_2_F",500,"true"},
            {"U_B_CTRG_Soldier_urb_1_F",500,"true"},
            {"U_B_CTRG_Soldier_urb_3_F",500,"true"},
            {"U_B_CTRG_Soldier_urb_2_F",500,"true"},
            {"U_I_HeliPilotCoveralls",500,"true"},
            {"U_B_HeliPilotCoveralls",500,"true"},
            {"U_O_PilotCoveralls",500,"true"},
            {"U_I_pilotCoveralls",500,"true"},
            {"U_B_PilotCoveralls",500,"true"},
            {"U_B_SpecopsUniform_sgg",500,"true"},
            {"U_O_SpecopsUniform_blk",500,"true"},
            {"U_O_SpecopsUniform_ocamo",500,"true"},
            {"U_I_Wetsuit",500,"true"},
            {"U_O_Wetsuit",500,"true"},
            {"U_B_Wetsuit",500,"true"},
            {"U_O_V_Soldier_Viper_F",500,"true"},
            {"U_O_V_Soldier_Viper_hex_F",500,"true"},
            {"U_C_Man_casual_2_F",200,"true"},
            {"U_C_Man_casual_3_F",200,"true"},
            {"U_C_Man_casual_1_F",200,"true"},
            {"U_C_Poloshirt_blue",200,"true"},
            {"U_C_Poloshirt_burgundy",200,"true"},
            {"U_C_Poloshirt_redwhite",200,"true"},
            {"U_C_Poloshirt_salmon",200,"true"},
            {"U_C_Poloshirt_stripped",200,"true"},
            {"U_C_Poloshirt_tricolour",200,"true"},
            {"U_C_Commoner1_1",200,"true"},
            {"U_C_Commoner1_2",200,"true"},
            {"U_C_Commoner1_3",200,"true"},
            {"U_C_Commoner2_1",200,"true"},
            {"U_C_Commoner2_2",200,"true"},
            {"U_C_Commoner2_3",200,"true"},
            {"U_C_Commoner_shorts",200,"true"},
            {"U_C_Man_casual_6_F",200,"true"},
            {"U_C_Man_casual_4_F",200,"true"},
            {"U_C_Man_casual_5_F",200,"true"},
            {"U_C_Driver_1_black",200,"true"},
            {"U_C_Driver_1_blue",200,"true"},
            {"U_C_Driver_2",200,"true"},
            {"U_C_Driver_1",200,"true"},
            {"U_C_Driver_1_green",200,"true"},
            {"U_C_Driver_1_orange",200,"true"},
            {"U_C_Driver_1_red",200,"true"},
            {"U_C_Driver_3",200,"true"},
            {"U_C_Driver_4",200,"true"},
            {"U_C_Driver_1_white",200,"true"},
            {"U_C_Driver_1_yellow",200,"true"},
            {"U_C_Farmer",200,"true"},
            {"U_C_Fisherman",200,"true"},
            {"U_C_FishermanOveralls",200,"true"},
            {"U_C_HunterBody_grn",200,"true"},
            {"U_C_HunterBody_brn",200,"true"},
            {"U_C_ShirtSurfer_shorts",200,"true"},
            {"U_C_TeeSurfer_shorts_1",200,"true"},
            {"U_C_TeeSurfer_shorts_2",200,"true"},
            {"U_C_Man_sport_1_F",200,"true"},
            {"U_C_Man_sport_3_F",200,"true"},
            {"U_C_Man_sport_2_F",200,"true"},
            {"U_I_C_Soldier_Bandit_4_F",300,"true"},
            {"U_I_C_Soldier_Bandit_1_F",300,"true"},
            {"U_I_C_Soldier_Bandit_2_F",300,"true"},
            {"U_I_C_Soldier_Bandit_5_F",300,"true"},
            {"U_I_C_Soldier_Bandit_3_F",300,"true"},
            {"U_C_PriestBody",300,"true"},
            {"U_KerryBody",300,"true"},
            {"U_MillerBody",300,"true"},
            {"U_I_G_resistanceLeader_F",300,"true"},
            {"U_B_T_Soldier_AR_F",300,"true"},
            {"U_B_T_Soldier_F",300,"true"},
            {"U_BG_Guerrilla_6_1",300,"true"},
            {"U_IG_Guerrilla_6_1",300,"true"},
            {"U_OG_Guerrilla_6_1",300,"true"},
            {"U_BG_Guerilla1_1",300,"true"},
            {"U_IG_Guerilla1_1",300,"true"},
            {"U_OG_Guerilla1_1",300,"true"},
            {"U_BG_Guerilla2_2",300,"true"},
            {"U_IG_Guerilla2_2",300,"true"},
            {"U_OG_Guerilla2_2",300,"true"},
            {"U_BG_Guerilla2_1",300,"true"},
            {"U_IG_Guerilla2_1",300,"true"},
            {"U_OG_Guerilla2_1",300,"true"},
            {"U_BG_Guerilla2_3",300,"true"},
            {"U_IG_Guerilla2_3",300,"true"},
            {"U_OG_Guerilla2_3",300,"true"},
            {"U_BG_Guerilla3_1",300,"true"},
            {"U_IG_Guerilla3_1",300,"true"},
            {"U_OG_Guerilla3_1",300,"true"},
            {"U_BG_Guerilla3_2",300,"true"},
            {"U_IG_Guerilla3_2",300,"true"},
            {"U_OG_Guerilla3_2",300,"true"},
            {"U_BG_leader",300,"true"},
            {"U_IG_leader",300,"true"},
            {"U_OG_leader",300,"true"},
            {"U_C_Journalist",300,"true"},
            {"U_IG_Menelaos",300,"true"},
            {"U_Marshal",300,"true"},
            {"U_OrestesBody",300,"true"},
            {"U_NikosBody",300,"true"},
            {"U_NikosAgedBody",300,"true"},
            {"U_AttisBody",300,"true"},
            {"U_AntigonaBody",300,"true"},
            {"U_C_Novak",300,"true"},
            {"U_C_Scavenger_2",300,"true"},
            {"U_C_Scavenger_1",300,"true"},
            {"U_C_Scientist",300,"true"},
            {"U_OI_Scientist",300,"true"},
            {"U_Rangemaster",300,"true"},
            {"U_C_WorkerOveralls",300,"true"},
            {"U_C_WorkerCoveralls",300,"true"},
            {"U_C_Poor_1",300,"true"},
            {"U_C_Poor_2",300,"true"},
            {"U_I_G_Story_Protagonist_F",300,"true"},
            {"U_B_CombatUniform_mcam_worn",300,"true"},
            {"U_C_Poor_shorts_1",300,"true"},
            {"U_C_Poor_shorts_2",300,"true"}
        };
    };

    class Vest
    {
        displayName = "$STR_HG_SHOP_VESTS";
        content[] =
        {
            {"V_PlateCarrierGL_blk",600,"true"},
            {"V_PlateCarrierGL_rgr",600,"true"},
            {"V_PlateCarrierGL_mtp",600,"true"},
            {"V_PlateCarrierGL_tna_F",600,"true"},
            {"V_PlateCarrierSpec_blk",600,"true"},
            {"V_PlateCarrierSpec_rgr",600,"true"},
            {"V_PlateCarrierSpec_mtp",600,"true"},
            {"V_PlateCarrierSpec_tna_F",600,"true"},
            {"V_PlateCarrier1_blk",400,"true"},
            {"V_PlateCarrier1_rgr_noflag_F",400,"true"},
            {"V_PlateCarrier1_rgr",400,"true"},
            {"V_PlateCarrier1_tna_F",400,"true"},
            {"V_PlateCarrier2_blk",400,"true"},
            {"V_PlateCarrier2_rgr_noflag_F",400,"true"},
            {"V_PlateCarrier2_rgr",400,"true"},
            {"V_PlateCarrier2_tna_F",400,"true"},
            {"V_PlateCarrierL_CTRG",400,"true"},
            {"V_PlateCarrierH_CTRG",400,"true"},
            {"V_PlateCarrierIA1_dgtl",400,"true"},
            {"V_PlateCarrierIA2_dgtl",400,"true"},
            {"V_PlateCarrierIAGL_dgtl",400,"true"},
            {"V_PlateCarrierIAGL_oli",400,"true"},
            {"V_PlateCarrier_Kerry",400,"true"},
            {"V_Chestrig_blk",200,"true"},
            {"V_Chestrig_rgr",200,"true"},
            {"V_Chestrig_khk",200,"true"},
            {"V_Chestrig_oli",200,"true"},
            {"V_TacVest_gen_F",200,"true"},
            {"V_TacChestrig_cbr_F",200,"true"},
            {"V_TacChestrig_grn_F",200,"true"},
            {"V_TacChestrig_oli_F",200,"true"},
            {"V_TacVest_blk",200,"true"},
            {"V_TacVest_brn",200,"true"},
            {"V_TacVest_camo",200,"true"},
            {"V_TacVest_khk",200,"true"},
            {"V_TacVest_oli",200,"true"},
            {"V_TacVest_blk_POLICE",200,"true"},
            {"V_HarnessOGL_brn",300,"true"},
            {"V_HarnessOGL_ghex_F",300,"true"},
            {"V_HarnessOGL_gry",300,"true"},
            {"V_HarnessO_brn",300,"true"},
            {"V_HarnessO_ghex_F",300,"true"},
            {"V_HarnessO_gry",300,"true"},
            {"V_RebreatherIA",300,"true"},
            {"V_RebreatherIR",300,"true"},
            {"V_RebreatherB",300,"true"},
            {"V_BandollierB_blk",300,"true"},
            {"V_BandollierB_cbr",300,"true"},
            {"V_BandollierB_ghex_F",300,"true"},
            {"V_BandollierB_rgr",300,"true"},
            {"V_BandollierB_khk",300,"true"},
            {"V_BandollierB_oli",300,"true"},
            {"V_Rangemaster_belt",0,"true"},
            {"V_Press_F",100,"true"},
            {"V_I_G_resistanceLeader_F",100,"true"}
        };
    };

    class Backpack
    {
        displayName = "$STR_HG_SHOP_BACKPACKS";
        content[] =
        {
            {"B_AssaultPack_blk",200,"true"},
            {"B_AssaultPack_cbr",200,"true"},
            {"B_AssaultPack_dgtl",200,"true"},
            {"B_AssaultPack_rgr",200,"true"},
            {"B_AssaultPack_ocamo",200,"true"},
            {"B_AssaultPack_khk",200,"true"},
            {"B_AssaultPack_mcamo",200,"true"},
            {"B_AssaultPack_sgg",200,"true"},
            {"B_AssaultPack_tna_F",200,"true"},
            {"B_FieldPack_blk",200,"true"},
            {"B_FieldPack_cbr",200,"true"},
            {"B_FieldPack_ghex_F",200,"true"},
            {"B_FieldPack_ocamo",200,"true"},
            {"B_FieldPack_khk",200,"true"},
            {"B_FieldPack_oli",200,"true"},
            {"B_FieldPack_oucamo",200,"true"},
            {"B_TacticalPack_blk",200,"true"},
            {"B_TacticalPack_rgr",200,"true"},
            {"B_TacticalPack_ocamo",200,"true"},
            {"B_TacticalPack_mcamo",200,"true"},
            {"B_TacticalPack_oli",200,"true"},
            {"B_AssaultPack_Kerry",200,"true"},
            {"B_Kitbag_cbr",400,"true"},
            {"B_Kitbag_rgr",400,"true"},
            {"B_Kitbag_mcamo",400,"true"},
            {"B_Kitbag_sgg",400,"true"},
            {"B_ViperHarness_blk_F",400,"true"},
            {"B_ViperHarness_ghex_F",400,"true"},
            {"B_ViperHarness_hex_F",400,"true"},
            {"B_ViperHarness_khk_F",400,"true"},
            {"B_ViperHarness_oli_F",400,"true"},
            {"B_Carryall_cbr",600,"true"},
            {"B_Carryall_ghex_F",600,"true"},
            {"B_Carryall_ocamo",600,"true"},
            {"B_Carryall_khk",600,"true"},
            {"B_Carryall_mcamo",600,"true"},
            {"B_Carryall_oli",600,"true"},
            {"B_Carryall_oucamo",600,"true"},
            {"B_Bergen_dgtl_F",600,"true"},
            {"B_Bergen_hex_F",600,"true"},
            {"B_Bergen_mcamo_F",600,"true"},
            {"B_Bergen_tna_F",600,"true"},
            {"B_ViperLightHarness_blk_F",600,"true"},
            {"B_ViperLightHarness_ghex_F",600,"true"},
            {"B_ViperLightHarness_hex_F",600,"true"},
            {"B_ViperLightHarness_khk_F",600,"true"},
            {"B_ViperLightHarness_oli_F",600,"true"}
			 };
    };
};
