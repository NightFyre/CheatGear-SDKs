#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SteamVR.SteamVRChaperoneComponent
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class USteamVRChaperoneComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLeaveBounds;                                           // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReturnToBounds;                                        // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DQE[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SteamVRChaperoneEvent__DelegateSignature();
		TArray<struct FVector> GetBounds();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamVR.SteamVRFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32_t>* OutTrackedDeviceIds);
		bool GetTrackedDevicePositionAndOrientation(int32_t DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation);
		bool GetHandPositionAndOrientation(int32_t ControllerIndex, EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamVR.SteamVRHQStereoLayerShape
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad
	{
	public:
		bool                                                       bCurved;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAntiAlias;                                              // 0x0029(0x0001) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OIL[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoCurveMinDistance;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoCurveMaxDistance;                                    // 0x0030(0x0004) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2236[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetCurved(bool InCurved);
		void SetAutoCurveMinDistance(float InDistance);
		void SetAutoCurveMaxDistance(float InDistance);
		void SetAntiAlias(bool InAntiAlias);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
