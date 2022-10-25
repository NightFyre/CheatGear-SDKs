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
	 * Class AthenaRigging.InstancedRopeComponent
	 * Size -> 0x00C8 (FullSize[0x0680] - InheritedSize[0x05B8])
	 */
	class UInstancedRopeComponent : public UPrimitiveComponent
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x05B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FInstancedRopeParams>                        Ropes;                                                   // 0x05C0(0x0010) Edit, ZeroConstructor, EditConst
		int32_t                                                    ShadowLOD;                                               // 0x05D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BWQD[0xAC];                                  // 0x05D4(0x00AC) MISSED OFFSET (PADDING)

	public:
		void SetUnderwater(bool Underwater);
		void SetRopes(TArray<struct FInstancedRopeParams> InRopes);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaRigging.MaterialExpressionRopeParameter
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UMaterialExpressionRopeParameter : public UMaterialExpression
	{
	public:
		EInstancedRopeParameterType                                RopeParameterType;                                       // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_41Z1[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaRigging.RiggingSystem
	 * Size -> 0x0150 (FullSize[0x0518] - InheritedSize[0x03C8])
	 */
	class ARiggingSystem : public AActor
	{
	public:
		unsigned char                                              UnknownData_D1RT[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Root;                                                    // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInstancedRopeComponent*                             InstancedRopes;                                          // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FRiggingSystemLine>                          Lines;                                                   // 0x03E0(0x0010) ZeroConstructor
		TArray<struct FInstancedRopeParams>                        Ropes;                                                   // 0x03F0(0x0010) ZeroConstructor
		TArray<class UMobileInstancedStaticMeshComponent*>         PulleyInstances;                                         // 0x0400(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
		struct FRiggingSystemPulleyData                            Pulleys;                                                 // 0x0410(0x0060)
		TArray<struct FSocketId>                                   Sockets;                                                 // 0x0470(0x0010) ZeroConstructor
		TArray<float>                                              InitialMainRopeLengths;                                  // 0x0480(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_KY1X[0x88];                                  // 0x0490(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaRigging.RiggingSystemComponent
	 * Size -> 0x0040 (FullSize[0x0320] - InheritedSize[0x02E0])
	 */
	class URiggingSystemComponent : public USceneComponent
	{
	public:
		struct FRopeStyleParams                                    RopeStyle;                                               // 0x02E0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly
		TArray<struct FRiggingSystemLineGroup>                     LineGroups;                                              // 0x0300(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		class ARiggingSystem*                                      Impl;                                                    // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AFN4[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSocketLookupSource(class AActor* InSocketSource);
		int32_t ConvertLineToRopeIndex(const class FName& InLineGroupName, int32_t InLineOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaRigging.RopeCatenaryRenderComponent
	 * Size -> 0x0008 (FullSize[0x0660] - InheritedSize[0x0658])
	 */
	class URopeCatenaryRenderComponent : public UCordRenderComponent
	{
	public:
		unsigned char                                              UnknownData_31UR[0x8];                                   // 0x0658(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaRigging.RopeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URopeInterface : public UInterface
	{
	public:
		void SetRopeUVOffset(float InUVOffset);
		void SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
