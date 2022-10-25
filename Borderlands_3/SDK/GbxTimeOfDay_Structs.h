#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxTimeOfDay.ETimeOfDayState
	 */
	enum class ETimeOfDayState : uint8_t
	{
		None    = 0,
		Morning = 1,
		Day     = 2,
		Evening = 3,
		Night   = 4,
		MAX     = 5
	};

	/**
	 * Enum GbxTimeOfDay.ETimeOfDayKeyType
	 */
	enum class ETimeOfDayKeyType : uint8_t
	{
		None        = 0,
		PropertyKey = 1,
		EventKey    = 2,
		StateKey    = 3,
		MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxTimeOfDay.ControlledLight
	 * Size -> 0x0038
	 */
	struct FControlledLight
	{
	public:
		float                                                      IntensityMultiplier;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DM3W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALight*                                              LightActor;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7HW[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.FloatParamLayerCurve
	 * Size -> 0x0080
	 */
	struct FFloatParamLayerCurve
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRichCurve                                          ValueCurve;                                              // 0x0008(0x0070) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZN31[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.VectorParamLayerCurve
	 * Size -> 0x01D8
	 */
	struct FVectorParamLayerCurve
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRichCurve                                          ValueCurve[0x4];                                         // 0x0008(0x01C0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TO0[0x10];                                  // 0x01C8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.LayerParameterCurves
	 * Size -> 0x0020
	 */
	struct FLayerParameterCurves
	{
	public:
		TArray<struct FFloatParamLayerCurve>                       FloatParams;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVectorParamLayerCurve>                      VectorParams;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTimeOfDay.PropertyLayerCurveBase
	 * Size -> 0x0018
	 */
	struct FPropertyLayerCurveBase
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YL4Z[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.FloatPropertyLayerCurve
	 * Size -> 0x0080 (FullSize[0x0098] - InheritedSize[0x0018])
	 */
	struct FFloatPropertyLayerCurve : public FPropertyLayerCurveBase
	{
	public:
		unsigned char                                              UnknownData_HAZK[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          ValueCurve;                                              // 0x0020(0x0070) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQLY[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.VectorPropertyLayerCurve
	 * Size -> 0x01D8 (FullSize[0x01F0] - InheritedSize[0x0018])
	 */
	struct FVectorPropertyLayerCurve : public FPropertyLayerCurveBase
	{
	public:
		unsigned char                                              UnknownData_TH12[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          ValueCurve[0x4];                                         // 0x0020(0x01C0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFBG[0x10];                                  // 0x01E0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.ColorPropertyLayerCurve
	 * Size -> 0x01D0 (FullSize[0x01E8] - InheritedSize[0x0018])
	 */
	struct FColorPropertyLayerCurve : public FPropertyLayerCurveBase
	{
	public:
		unsigned char                                              UnknownData_6SOB[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          ValueCurve[0x4];                                         // 0x0020(0x01C0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYTX[0x8];                                   // 0x01E0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.Vector4PropertyLayerCurve
	 * Size -> 0x01D8 (FullSize[0x01F0] - InheritedSize[0x0018])
	 */
	struct FVector4PropertyLayerCurve : public FPropertyLayerCurveBase
	{
	public:
		unsigned char                                              UnknownData_U7EW[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          ValueCurve[0x4];                                         // 0x0020(0x01C0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MIF[0x10];                                  // 0x01E0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.LayerPropertyCurves
	 * Size -> 0x0040
	 */
	struct FLayerPropertyCurves
	{
	public:
		TArray<struct FFloatPropertyLayerCurve>                    FloatProps;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVectorPropertyLayerCurve>                   VectorProps;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColorPropertyLayerCurve>                    ColorProps;                                              // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector4PropertyLayerCurve>                  Vector4Props;                                            // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTimeOfDay.TimeOfDayEvent
	 * Size -> 0x0028
	 */
	struct FTimeOfDayEvent
	{
	public:
		float                                                      EventTime;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UAYI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EventName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETimeOfDayState                                            State;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPOI[0x17];                                  // 0x0011(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.LayerCurveData
	 * Size -> 0x0078
	 */
	struct FLayerCurveData
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLayerParameterCurves                               ParameterLayerCurves;                                    // 0x0008(0x0020) NativeAccessSpecifierPublic
		struct FLayerPropertyCurves                                PropertyLayerCurves;                                     // 0x0028(0x0040) NativeAccessSpecifierPublic
		TArray<struct FTimeOfDayEvent>                             LayerEvents;                                             // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTimeOfDay.TimeOfDayCycleInstanceData
	 * Size -> 0x00A0
	 */
	struct FTimeOfDayCycleInstanceData
	{
	public:
		class UTimeOfDayCycle*                                     ParentCycle;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCycleLength;                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIRF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideCycleLength;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLayerCurveData>                             LayerCurveData;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LJQ1[0x80];                                  // 0x0020(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTimeOfDay.TODCollectionVector4Parameter
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FTODCollectionVector4Parameter : public FCollectionParameterBase
	{
	public:
		unsigned char                                              UnknownData_PN4K[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            DefaultValue;                                            // 0x0020(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTimeOfDay.TODCollectionParam
	 * Size -> 0x0018
	 */
	struct FTODCollectionParam
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ID;                                                      // 0x0008(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTimeOfDay.TODVectorCollectionParam
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FTODVectorCollectionParam : public FTODCollectionParam
	{	};

	/**
	 * ScriptStruct GbxTimeOfDay.TODScalarCollectionParam
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FTODScalarCollectionParam : public FTODCollectionParam
	{	};

	/**
	 * ScriptStruct GbxTimeOfDay.PlanetCycleInfo
	 * Size -> 0x0010
	 */
	struct FPlanetCycleInfo
	{
	public:
		class FName                                                PlanetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CycleLength;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastCachedTime;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTimeOfDay.TimeOfDaySaveGameData
	 * Size -> 0x0018
	 */
	struct FTimeOfDaySaveGameData
	{
	public:
		TArray<struct FPlanetCycleInfo>                            PlanetCycleInfo;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                PlanetCycle;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
