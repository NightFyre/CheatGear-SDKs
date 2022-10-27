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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Wind.WindZoneParams
	 * Size -> 0x0010
	 */
	struct FWindZoneParams
	{
	public:
		float                                                      OuterRadius;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InnerRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurbulenceScalar;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WindOnlyAffectsTrees;                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H4A3[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Wind.WindZoneTurbulence
	 * Size -> 0x0008
	 */
	struct FWindZoneTurbulence
	{
	public:
		float                                                      Base;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Current;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Wind.WindServiceParams
	 * Size -> 0x0024
	 */
	struct FWindServiceParams
	{
	public:
		float                                                      MinAngleChange;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxAngleChange;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinTimeChange;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTimeChange;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinWindMagnitude;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWindMagnitude;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AbsoluteMaxWindMagnitude;                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinBlendTimeBetweenChanges;                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxBlendTimeBetweenChanges;                              // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Wind.ExtraWind
	 * Size -> 0x0038
	 */
	struct FExtraWind
	{
	public:
		class UObject*                                             Source;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Basis;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1HC7[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Wind.WindTurbulenceParameters
	 * Size -> 0x0070
	 */
	struct FWindTurbulenceParameters
	{
	public:
		struct FFloatRange                                         GustPower;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FWeightedProbabilityRangeOfRanges                   GustTime;                                                // 0x0010(0x0030) Edit, BlueprintVisible
		struct FWeightedProbabilityRangeOfRanges                   CalmTime;                                                // 0x0040(0x0030) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct Wind.WindMagnitudeChanged
	 * Size -> 0x0001
	 */
	struct FWindMagnitudeChanged
	{
	public:
		unsigned char                                              UnknownData_H596[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Wind.WindDirectionChanged
	 * Size -> 0x0001
	 */
	struct FWindDirectionChanged
	{
	public:
		unsigned char                                              UnknownData_6I1O[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
