class CfgPatches {
	class snkg_spe_usmc_vehicles {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_SPE_Assets_c_Vehicles_Wheeled_U1_c_G503_MB"};
	};
};

class CfgVehicles {
    class SPE_US_G503_MB {
        class EventHandlers;
    };
	class SPE_US_G503_MB_Open {
        class EventHandlers;
    };
    class SPE_US_G503_MB_M1919 {
        class EventHandlers;
    };
    class SPE_US_G503_MB_M2 {
        class EventHandlers;
    };
    class SPE_US_G503_MB_M1919_PATROL {
        class EventHandlers;
    };
    class SPE_US_G503_MB_M2_PATROL {
        class EventHandlers;
    };
    class SPE_US_G503_MB_Ambulance {
        class EventHandlers;
    };

    class SNKG_SPE_USMC_G503 : SPE_US_G503_MB {
        displayname = "USMC - Willys MB";
        hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
            class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_MP {
				displayName = "USMC MP";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_ca", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_MP_NoStar {
				displayName = "USMC MP (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

    class SNKG_SPE_USMC_G503_Open : SPE_US_G503_MB_Open {
        displayname = "USMC - Willys MB (Open)";
        hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
            class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_MP {
				displayName = "USMC MP";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_ca", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_MP_NoStar {
				displayName = "USMC MP (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

    class SNKG_SPE_USMC_G503_M1919 : SPE_US_G503_MB_M1919 {
        displayname = "USMC - Willys MB (M1919)";
        hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
            class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_MP {
				displayName = "USMC MP";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_ca", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_MP_NoStar {
				displayName = "USMC MP (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

    class SNKG_SPE_USMC_G503_M2 : SPE_US_G503_MB_M2 {
        displayname = "USMC - Willys MB (M2)";
        hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
            class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_MP {
				displayName = "USMC MP";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_ca", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_MP_NoStar {
				displayName = "USMC MP (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

    class SNKG_SPE_USMC_G503_M2_Patrol : SPE_US_G503_MB_M2_PATROL {
        displayname = "USMC - Willys MB (M2 Patrol)";
        hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
            class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_MP {
				displayName = "USMC MP";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_ca", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_MP_NoStar {
				displayName = "USMC MP (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

    class SNKG_SPE_USMC_G503_M1919_Patrol : SPE_US_G503_MB_M1919_PATROL {
        displayname = "USMC - Willys MB (Patrol)";
        hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
            class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
			class USMC_MP {
				displayName = "USMC MP";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_ca", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_MP_NoStar {
				displayName = "USMC MP (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_MP_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

    class SNKG_SPE_USMC_G503_Ambulance : SPE_US_G503_MB_Ambulance {
        displayname = "USMC - Willys MB (Ambulance)";
        hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_amb_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
            class USMC_Ambulance {
				displayName = "USMC Ambulance";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_amb_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_Ambulance_NoCross {
				displayName = "USMC Ambulance (no cross)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_Ambulance_NoCross_v2 {
				displayName = "USMC Ambulance (no cross v2)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_1_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_2_co.paa", "WW2\SPE_Assets_t\Vehicles\Wheeled_U1_t\G503_MB\G503_3_co.paa", "\snkg_spe_usmc_vehicles\data\G503_MB_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

    class SPE_CCKW_353 {
        class EventHandlers;
    };
    class SPE_CCKW_353_Open {
        class EventHandlers;
    };
    class SPE_CCKW_353_Ammo {
        class EventHandlers;
    };
    class SPE_CCKW_353_Ambulance {
        class EventHandlers;
    };
    class SPE_CCKW_353_Repair {
        class EventHandlers;
    };
    class SPE_CCKW_353_Fuel {
        class EventHandlers;
    };
    class SPE_CCKW_353_M2 {
        class EventHandlers;
    };

    class SNKG_SPE_USMC_CCKW_353 : SPE_CCKW_353 {
        displayname = "USMC - CCKW 353";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
			class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};
    class SNKG_SPE_USMC_CCKW_353_Open : SPE_CCKW_353_Open {
        displayname = "USMC - CCKW 353 (Open)";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
			class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};
    class SNKG_SPE_USMC_CCKW_353_Ammo : SPE_CCKW_353_Ammo {
        displayname = "USMC - CCKW 353 (Ammo)";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
			class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};
    class SNKG_SPE_USMC_CCKW_353_Ambulance : SPE_CCKW_353_Ambulance {
        displayname = "USMC - CCKW 353 (Ambulance)";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_amb_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
			class USMC_Ambulance {
				displayName = "USMC Ambulance";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_amb_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_Ambulance_NoCross {
				displayName = "USMC Ambulance (no cross)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_Ambulance_NoCross_NoStar {
				displayName = "USMC Ambulance (no cross + no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};
    class SNKG_SPE_USMC_CCKW_353_Repair : SPE_CCKW_353_Repair {
        displayname = "USMC - CCKW 353 (Repair)";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Repair_co.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
		
		class textureSources {
			class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Fuel_co.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_nostar_ca.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Fuel_co.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};
    class SNKG_SPE_USMC_CCKW_353_Fuel : SPE_CCKW_353_Fuel {
        displayname = "USMC - CCKW 353 (Fuel)";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Fuel_co.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
		
		class textureSources {
			class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Fuel_co.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_nostar_ca.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_Fuel_co.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};
    class SNKG_SPE_USMC_CCKW_353_M2 : SPE_CCKW_353_M2 {
		displayname = "USMC - CCKW 353 (M2)";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
        class textureSources {
			class USMC {
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
            class USMC_NoStar {
				displayName = "USMC (no star)";
				author = "Heavy Ordnance Works";
				dlc = SPE;
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_1_co.paa", "\WW2\SPE_Assets_t\Vehicles\Trucks_U1_t\CCKW\CCKW_2_co.paa", "\snkg_spe_usmc_vehicles\data\CCKW_USMC_nostar_ca.paa", "\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};

        class Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
				tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
				expression = "[_this, _value, 'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = STRING;
				validate = STRING;
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                postInit = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
                killed = "(_this select 0) setPlateNumber ''";
            };
        };
	};

	class SPE_M4A0_75;
	class SNK_USMC_M4A0_75_base : SPE_M4A0_75 {
        scope = 0;
        class EventHandlers;
        class Attributes;
	};
	class SNK_USMC_M4_75 : SNK_USMC_M4A0_75_base {
        displayname = "USMC - M4 (75) W";
		side = 2;
		scope = 2;
		scopeCurator = 2;
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A0\M4A0_E_Hull_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa","\snkg_spe_usmc_vehicles\data\spe_m4\decal_IMAC_mc.paa","","\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};

        class textureSources {
            class Standard
			{
				displayName = $STR_SPE_DN_ASSETS_VEHICLES_OLIVE;
				author = "Heavy Ordnance Works";
				dlc = "SPE";
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A0\M4A0_E_Hull_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa","","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"};
			};
			class USMC
			{
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = "SPE";
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A0\M4A0_E_Hull_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa","\snkg_spe_usmc_vehicles\data\spe_m4\decal_IMAC_mc.paa","","\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings {
                init = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
            };
        };
        class Attributes : Attributes {
			class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = $STR_SPE_ASSETS_VEHICLES_DISPLAYNAME_UNIT_NUMBER;
				tooltip = $STR_SPE_ASSETS_VEHICLES_TOOLTIP_LEAVE_BLANK_TO_DISABLE_1;
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = "STRING";
				validate = "STRING";
			};
            class Nickname
            {
                control = "EditShort";
                defaultValue = "-1";
                displayName = $STR_SPE_ASSETS_VEHICLES_DISPLAYNAME_TANK_NICKNAME;
                tooltip = $STR_SPE_ASSETS_VEHICLES_TOOLTIP_LEAVE_BLANK_TO_DISABLE_2;
                expression = "[_this,_value,'SPE_nickname'] spawn SPE_Fnc_Nickname_update;";
                property = "SPE_Nickname_attribute";
                typeName = "STRING";
                validate = "STRING";
            };
            class SPE_HideTurret
            {
                displayName = $STR_SPE_DN_ASSETS_VEHICLES_SPE_HIDETURRET;
                property = "SPE_HideTurret";
                control = "CheckboxNumber";
                expression = "_this animate ['SPE_HideTurret',_value,true]; _this setDamage [_value,false];";
                defaultValue = "0";
            };
            class SPE_VehicleLoadout
            {
                displayName = "";
                tooltip = "";
                property = "SPE_System_TankLoadout";
                control = "SPE_System_TankLoadout";
                expression = "[_this,_value] spawn SPE_fnc_System_ammunition_updateAmmoLoadout;";
                defaultValue = "0";
            };
        };
    };

    class SPE_M4A3_75;
    class SNK_USMC_M4A3_75_base : SPE_M4A3_75 {
		scope = 0;
		class EventHandlers;
        class Attributes;
	};
    class SNK_USMC_M4A3_75 : SNK_USMC_M4A3_75_base {
        displayname = "USMC - M4A3 (75) W";
		side = 2;
		scope = 2;
		scopeCurator = 2;
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa","\snkg_spe_usmc_vehicles\data\spe_m4\decal_IMAC_mc.paa","","\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};

        class textureSources {
            class Standard
			{
				displayName = $STR_SPE_DN_ASSETS_VEHICLES_OLIVE;
				author = "Heavy Ordnance Works";
				dlc = "SPE";
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_alt_ca.paa","","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"};
			};
			class USMC
			{
				displayName = "USMC";
				author = "Heavy Ordnance Works";
				dlc = "SPE";
				textures[] = {"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa","\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa","\snkg_spe_usmc_vehicles\data\spe_m4\decal_IMAC_mc.paa","","\snkg_spe_usmc_vehicles\data\Usmc_ca_light.paa"};
			};
		};
        class EventHandlers : EventHandlers {
            class SPE_System_NumberMarkings
            {
                init = "_this call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_init.sqf';";
            };
        };
        class Attributes : Attributes {
            class SPE_UnitNumber {
				control = "EditShort";
				defaultValue = "-1";
				displayName = $STR_SPE_ASSETS_VEHICLES_DISPLAYNAME_UNIT_NUMBER;
				tooltip = $STR_SPE_ASSETS_VEHICLES_TOOLTIP_LEAVE_BLANK_TO_DISABLE_1;
				expression = "[_this,_value,'SPE_numbers'] call compile preprocessFileLineNumbers '\snkg_spe_usmc_vehicles\scripts\fn_update.sqf';";
				property = "SPE_Unit_Number_attribute";
				typeName = "STRING";
				validate = "STRING";
			};
            class Nickname
            {
                control = "EditShort";
                defaultValue = "-1";
                displayName = $STR_SPE_ASSETS_VEHICLES_DISPLAYNAME_TANK_NICKNAME;
                tooltip = $STR_SPE_ASSETS_VEHICLES_TOOLTIP_LEAVE_BLANK_TO_DISABLE_2;
                expression = "[_this,_value,'SPE_nickname'] spawn SPE_Fnc_Nickname_update;";
                property = "SPE_Nickname_attribute";
                typeName = "STRING";
                validate = "STRING";
            };
            class SPE_HideTurret
            {
                displayName = $STR_SPE_DN_ASSETS_VEHICLES_SPE_HIDETURRET;
                property = "SPE_HideTurret";
                control = "CheckboxNumber";
                expression = "_this animate ['SPE_HideTurret',_value,true]; _this setDamage [_value,false];";
                defaultValue = "0";
            };
            class SPE_VehicleLoadout
            {
                displayName = "";
                tooltip = "";
                property = "SPE_System_TankLoadout";
                control = "SPE_System_TankLoadout";
                expression = "[_this,_value] spawn SPE_fnc_System_ammunition_updateAmmoLoadout;";
                defaultValue = "0";
            };
        };
    };
};