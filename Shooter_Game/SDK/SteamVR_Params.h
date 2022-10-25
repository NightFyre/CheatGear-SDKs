#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
	 */
	struct USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SteamVR.SteamVRChaperoneComponent.GetBounds
	 */
	struct USteamVRChaperoneComponent_GetBounds_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
	 */
	struct USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params
	{
	public:
		ESteamVRTrackedDeviceType                                  DeviceType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BRN6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            OutTrackedDeviceIds;                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
	 */
	struct USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params
	{
	public:
		int32_t                                                    DeviceID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutPosition;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutOrientation;                                          // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
	 */
	struct USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params
	{
	public:
		int32_t                                                    ControllerIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControllerHand                                            hand;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P4H8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutPosition;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutOrientation;                                          // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVR.SteamVRHQStereoLayerShape.SetCurved
	 */
	struct USteamVRHQStereoLayerShape_SetCurved_Params
	{
	public:
		bool                                                       InCurved;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
	 */
	struct USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Params
	{
	public:
		float                                                      InDistance;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
	 */
	struct USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Params
	{
	public:
		float                                                      InDistance;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
	 */
	struct USteamVRHQStereoLayerShape_SetAntiAlias_Params
	{
	public:
		bool                                                       InAntiAlias;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
