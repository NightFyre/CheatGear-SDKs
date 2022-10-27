#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function GbxTimeOfDay.TimeOfDayActor.GetDirectionalLightComponent
	 */
	struct ATimeOfDayActor_GetDirectionalLightComponent_Params
	{
	public:
		class UDirectionalLightComponent*                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayActor.EnumerateLayerNames
	 */
	struct ATimeOfDayActor_EnumerateLayerNames_Params
	{
	public:
		TArray<class FName>                                        OutLayerNames;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayActor.AddEventListener
	 */
	struct ATimeOfDayActor_AddEventListener_Params
	{
	public:
		class UObject*                                             InListener;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionUpOneLayer
	 */
	struct UTimeOfDayBlueprintLibrary_TransitionUpOneLayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TransitionDuration;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionToLayer
	 */
	struct UTimeOfDayBlueprintLibrary_TransitionToLayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToLayer;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TransitionDuration;                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionDownOneLayer
	 */
	struct UTimeOfDayBlueprintLibrary_TransitionDownOneLayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TransitionDuration;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.StartTimeOfDay
	 */
	struct UTimeOfDayBlueprintLibrary_StartTimeOfDay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.SetTimeOfDay
	 */
	struct UTimeOfDayBlueprintLibrary_SetTimeOfDay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewTimeOfDay;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.PauseTimeOfDay
	 */
	struct UTimeOfDayBlueprintLibrary_PauseTimeOfDay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDayState
	 */
	struct UTimeOfDayBlueprintLibrary_GetTimeOfDayState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETimeOfDayState                                            ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDay
	 */
	struct UTimeOfDayBlueprintLibrary_GetTimeOfDay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.AddTimeOfDayListener
	 */
	struct UTimeOfDayBlueprintLibrary_AddTimeOfDayListener_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InListener;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayComponent.SetUseCinematicTimeOfDay
	 */
	struct UTimeOfDayComponent_SetUseCinematicTimeOfDay_Params
	{
	public:
		bool                                                       InUseCinematicTimeOfDay;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxTimeOfDay.TimeOfDayComponent.SetCinematicTimeOfDay
	 */
	struct UTimeOfDayComponent_SetCinematicTimeOfDay_Params
	{
	public:
		float                                                      InCinematicTimeOfDay;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
