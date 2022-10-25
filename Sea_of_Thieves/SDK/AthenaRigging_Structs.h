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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AthenaRigging.EInstancedRopeParameterType
	 */
	enum class EInstancedRopeParameterType : uint8_t
	{
		RPT_Start              = 0,
		RPT_End                = 1,
		RPT_Roughness          = 2,
		RPT_Thickness          = 3,
		RPT_UVScale            = 4,
		RPT_UVOffset           = 5,
		RPT_Length             = 6,
		RPT_SwingTime          = 7,
		RPT_WindAmount         = 8,
		RPT_CatenaryScale      = 9,
		RPT_CatenaryX0         = 10,
		RPT_CatenaryY0         = 11,
		RPT_CatenaryXYDistance = 12,
		RPT_IsCatenary         = 13,
		RPT_MAX                = 14
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaRigging.RopeCatenaryLengthParams
	 * Size -> 0x0010
	 */
	struct FRopeCatenaryLengthParams
	{
	public:
		float                                                      MinTautLength;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTautLength;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CatenaryScaleAtMinLength;                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CatenaryScaleAtMaxLength;                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaRigging.RopeCatenarySlopeBlendParams
	 * Size -> 0x0008
	 */
	struct FRopeCatenarySlopeBlendParams
	{
	public:
		float                                                      MinSlopeForTautBlend;                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSlopeForTautBlend;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaRigging.RopeCatenaryShapeParams
	 * Size -> 0x0018
	 */
	struct FRopeCatenaryShapeParams
	{
	public:
		struct FRopeCatenaryLengthParams                           Length;                                                  // 0x0000(0x0010) Edit, BlueprintVisible
		struct FRopeCatenarySlopeBlendParams                       Slope;                                                   // 0x0010(0x0008) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct AthenaRigging.RopeCatenarySwingParams
	 * Size -> 0x0008
	 */
	struct FRopeCatenarySwingParams
	{
	public:
		float                                                      LengthForNeutralSwing;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LengthBias;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaRigging.RopeCatenaryDynamicsParams
	 * Size -> 0x0008
	 */
	struct FRopeCatenaryDynamicsParams
	{
	public:
		float                                                      CatenaryToTautLengthRatioToConsiderCatenary;             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReactsToWind;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ABVT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaRigging.InstancedRopeParams
	 * Size -> 0x0054
	 */
	struct FInstancedRopeParams
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             End;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Thickness;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UVScale;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UVBase;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UVOffset;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Roughness;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRopeCatenaryShapeParams                            Shape;                                                   // 0x002C(0x0018) Edit, BlueprintVisible
		struct FRopeCatenarySwingParams                            Swing;                                                   // 0x0044(0x0008) Edit, BlueprintVisible
		struct FRopeCatenaryDynamicsParams                         Dynamics;                                                // 0x004C(0x0008) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct AthenaRigging.RiggingSystemLine
	 * Size -> 0x0010
	 */
	struct FRiggingSystemLine
	{
	public:
		uint32_t                                                   RopeStart;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   SocketStart;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   PulleyStart;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   NumRopes;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaRigging.RiggingSystemPulleyData
	 * Size -> 0x0060
	 */
	struct FRiggingSystemPulleyData
	{
	public:
		TArray<float>                                              AttachmentSag;                                           // 0x0000(0x0010) ZeroConstructor
		TArray<float>                                              AttachmentLength;                                        // 0x0010(0x0010) ZeroConstructor
		TArray<float>                                              Scale;                                                   // 0x0020(0x0010) ZeroConstructor
		TArray<float>                                              ScaledOffset;                                            // 0x0030(0x0010) ZeroConstructor
		TArray<float>                                              ScaledRadius;                                            // 0x0040(0x0010) ZeroConstructor
		TArray<int32_t>                                            MeshIDs;                                                 // 0x0050(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaRigging.RopeStyleParams
	 * Size -> 0x0020
	 */
	struct FRopeStyleParams
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          DiffuseTexture;                                          // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          NormalTexture;                                           // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ShadowLOD;                                               // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZT83[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaRigging.PulleyVisualParams
	 * Size -> 0x0010
	 */
	struct FPulleyVisualParams
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaRigging.RopeVisualParams
	 * Size -> 0x000C
	 */
	struct FRopeVisualParams
	{
	public:
		float                                                      Thickness;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UVScale;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Roughness;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaRigging.RiggingSystemPulleyAttachmentParams
	 * Size -> 0x0014
	 */
	struct FRiggingSystemPulleyAttachmentParams
	{
	public:
		struct FRopeVisualParams                                   Visuals;                                                 // 0x0000(0x000C) Edit
		float                                                      Length;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sag;                                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaRigging.RiggingSystemPulleyParams
	 * Size -> 0x0050
	 */
	struct FRiggingSystemPulleyParams
	{
	public:
		struct FSocketId                                           Anchor;                                                  // 0x0000(0x0020) Edit
		float                                                      OffsetFromAnchor;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MSJE[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPulleyVisualParams                                 Visuals;                                                 // 0x0028(0x0010) Edit
		struct FRiggingSystemPulleyAttachmentParams                AttachmentRope;                                          // 0x0038(0x0014) Edit
		unsigned char                                              UnknownData_3VRA[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaRigging.RiggingSystemLineParams
	 * Size -> 0x0078
	 */
	struct FRiggingSystemLineParams
	{
	public:
		struct FSocketId                                           Start;                                                   // 0x0000(0x0020) Edit, SimpleDisplay
		TArray<struct FRiggingSystemPulleyParams>                  Pulleys;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, SimpleDisplay
		struct FSocketId                                           End;                                                     // 0x0030(0x0020) Edit, SimpleDisplay
		struct FRopeVisualParams                                   Visuals;                                                 // 0x0050(0x000C) Edit
		struct FRopeCatenaryShapeParams                            Shape;                                                   // 0x005C(0x0018) Edit
		unsigned char                                              UnknownData_O901[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaRigging.RiggingSystemLineGroup
	 * Size -> 0x0018
	 */
	struct FRiggingSystemLineGroup
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FRiggingSystemLineParams>                    Lines;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaRigging.RopeCatenaryLengthPair
	 * Size -> 0x0008
	 */
	struct FRopeCatenaryLengthPair
	{
	public:
		float                                                      Taut;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Catenary;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
