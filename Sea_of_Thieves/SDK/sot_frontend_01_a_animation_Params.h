#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection
	 */
	struct Asot_frontend_01_a_animation_C_OnReturnToPirateSelection_Params
	{	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector
	 */
	struct Asot_frontend_01_a_animation_C_GetPirateSelector_Params
	{
	public:
		class UPirateSelector*                                     PirateSelectorComponent;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent
	 */
	struct Asot_frontend_01_a_animation_C_GetFrontendCameraComponent_Params
	{
	public:
		class UFrontendCameraComponent*                            Frontend_Camera_Component;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam
	 */
	struct Asot_frontend_01_a_animation_C_goToShipSelCam_Params
	{	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay
	 */
	struct Asot_frontend_01_a_animation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect
	 */
	struct Asot_frontend_01_a_animation_C_ShipSelect_Params
	{	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate
	 */
	struct Asot_frontend_01_a_animation_C_GenerateShipSelectionPirate_Params
	{	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate
	 */
	struct Asot_frontend_01_a_animation_C_HideShipSelectionPirate_Params
	{	};

	/**
	 * Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation
	 */
	struct Asot_frontend_01_a_animation_C_ExecuteUbergraph_sot_frontend_01_a_animation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
