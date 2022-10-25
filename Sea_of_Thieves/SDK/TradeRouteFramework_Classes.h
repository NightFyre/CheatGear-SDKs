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
	 * Class TradeRouteFramework.TradeRouteDifficultyBand
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTradeRouteDifficultyBand : public UObject
	{
	public:
		int32_t                                                    MinimumRank;                                             // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6RJU[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TradeRouteFramework.TradeRouteData
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UTradeRouteData : public UDataAsset
	{
	public:
		struct FIslandSelectionType                                StartIsland;                                             // 0x0028(0x0008) Edit, DisableEditOnInstance
		struct FIslandSelectionType                                EndIsland;                                               // 0x0030(0x0008) Edit, DisableEditOnInstance
		struct FPlayerStat                                         RouteCompletionStat;                                     // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		ETradeRouteMapOrientation                                  MapOrientation;                                          // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ARM5[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTradeRouteMapData                                  TradeRouteMapData;                                       // 0x0040(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep
	 * Size -> 0x0070 (FullSize[0x0100] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetProjectionPointOnTradeRouteStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_505K[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_9GHD[0x68];                                  // 0x0098(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetProjectionPointOnTradeRouteStepDesc : public UTaleQuestStepDesc
	{
	public:
		float                                                      ProjectionProportion;                                    // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5BAF[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                SourcePoint;                                             // 0x0088(0x0020) Edit
		struct FQuestVariableTradeRouteData                        TradeRouteData;                                          // 0x00A8(0x0020) Edit
		struct FQuestVariableVector                                ProjectedPoint;                                          // 0x00C8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TradeRouteFramework.TaleQuestSelectTradeRouteStep
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UTaleQuestSelectTradeRouteStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_K4IJ[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestSelectTradeRouteStepDesc*                  Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ED8S[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UTaleQuestSelectTradeRouteStepDesc : public UTaleQuestStepDesc
	{
	public:
		int32_t                                                    NumSelectFromClosestIslands;                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_APU8[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableVector                                SelectionOriginPointVar;                                 // 0x0088(0x0020) Edit
		struct FQuestVariableInt                                   TradeRouteDifficulty;                                    // 0x00A8(0x0020) Edit
		struct FQuestVariableTradeRouteData                        TradeRoute;                                              // 0x00C8(0x0020) Edit
		struct FQuestVariableTaleResourceHandle                    AllocatedTradeRouteHandleVar;                            // 0x00E8(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TradeRouteFramework.TradeRoutesDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTradeRoutesDataAsset : public UDataAsset
	{
	public:
		TArray<struct FTradeRouteMapping>                          TradeRouteMappings;                                      // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TradeRouteFramework.WorldTradeRouteInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWorldTradeRouteInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
