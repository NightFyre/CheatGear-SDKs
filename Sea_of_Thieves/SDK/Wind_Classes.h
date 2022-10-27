#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class Wind.WindZoneInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWindZoneInterface : public UInterface
	{
	public:
		struct FWindZoneParams GetWindZoneParams();
		struct FVector2D GetWindZoneLocation();
		struct FWindZoneTurbulence GetTurbulence(const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.WindInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWindInterface : public UInterface
	{
	public:
		void UnregisterWindZone();
		void TriggerChange(bool ChangeInstantly);
		void SetParams(const struct FWindServiceParams& Params);
		void SetGlobalWindVector(const struct FVector& InWindVector);
		void SetGlobalWindMagnitude(float InWindMagnitude);
		void SetGlobalWindDirection(const struct FVector& InWindDirection);
		void SetGlobalWindAngle(float InAngle);
		void SetCustomMode(bool InCustomMode);
		void RegisterWindZone();
		void GetWindZoneAtLocation(const struct FVector& SamplePosition);
		struct FVector GetWindVector(const struct FVector& SamplePosition);
		float GetWindMagnitude(const struct FVector& SamplePosition);
		struct FVector GetWindDirection(const struct FVector& SamplePosition);
		float GetWindAngle(const struct FVector& SamplePosition);
		struct FWindZoneTurbulence GetTurbulenceForTrees(const struct FVector& SamplePosition);
		struct FWindZoneTurbulence GetTurbulence(const struct FVector& SamplePosition);
		float GetMaxWindMagnitude();
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.DebugWindInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugWindInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.MockWindService
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMockWindService : public UObject
	{
	public:
		unsigned char                                              UnknownData_V57Q[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.TestWindInterface
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTestWindInterface : public UObject
	{
	public:
		unsigned char                                              UnknownData_TWXY[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WindZones[0x10];                                         // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty Wind.TestWindInterface.WindZones

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.TestWindZone
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UTestWindZone : public UObject
	{
	public:
		unsigned char                                              UnknownData_YQ8S[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.WindFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWindFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetDefaultWindBlowingNorth(class UObject* WorldContextObject);
		struct FVector STATIC_GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.WindService
	 * Size -> 0x0138 (FullSize[0x0500] - InheritedSize[0x03C8])
	 */
	class AWindService : public AActor
	{
	public:
		unsigned char                                              UnknownData_U6FD[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWindDirectionalSource*                              GlobalWindSource;                                        // 0x03D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_BRFC[0x10];                                  // 0x03E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentWindAngle;                                        // 0x03F0(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentWindMagnitude;                                    // 0x03F4(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYS4[0xE8];                                  // 0x03F8(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WindZones[0x10];                                         // 0x04E0(0x0010) UNKNOWN PROPERTY: ArrayProperty Wind.WindService.WindZones
		TArray<struct FExtraWind>                                  ExtraWind;                                               // 0x04F0(0x0010) ZeroConstructor

	public:
		void OnRep_WindMagnitude();
		void OnRep_WindAngle();
		struct FWindServiceParams GetWindParams();
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.DebugWindService
	 * Size -> 0x0010 (FullSize[0x0510] - InheritedSize[0x0500])
	 */
	class ADebugWindService : public AWindService
	{
	public:
		unsigned char                                              UnknownData_ODAX[0x10];                                  // 0x0500(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.WindServiceParamsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWindServiceParamsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2);
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.WindZoneComponent
	 * Size -> 0x0090 (FullSize[0x0370] - InheritedSize[0x02E0])
	 */
	class UWindZoneComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_H2YO[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWindTurbulenceParameters                           TurbulenceParams;                                        // 0x02E8(0x0070) Edit, BlueprintVisible
		struct FWindZoneParams                                     WindZoneParams;                                          // 0x0358(0x0010) Edit, BlueprintVisible
		unsigned char                                              UnknownData_TTXT[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Wind.TestWindZoneComponent
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class UTestWindZoneComponent : public UWindZoneComponent
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
