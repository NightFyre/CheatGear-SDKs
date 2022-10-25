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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GbxRuntime.GbxDataAsset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxDataAsset : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxRuntime.GbxCondition
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UGbxCondition : public UObject
	{
	public:
		bool                                                       bInvertCondition;                                        // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EConditionRefreshRate                                      RefreshRate;                                             // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8XDV[0x5E];                                  // 0x002A(0x005E) MISSED OFFSET (PADDING)

	public:
		bool STATIC_K2_EvaluateConditionType(class UClass* Condition, class UObject* Context);
		bool STATIC_K2_EvaluateCondition(class UGbxCondition* Condition, class UObject* Context);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxRuntime.GbxDataAssetBlueprintable
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxDataAssetBlueprintable : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxRuntime.NumericRangeExt
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNumericRangeExt : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_ToValueVarianceString(const struct FNumericRange& Range);
		class FString STATIC_ToValueString(const struct FNumericRange& Range);
		class FString STATIC_ToString(const struct FNumericRange& Range);
		class FString STATIC_ToMinMaxString(const struct FNumericRange& Range);
		void STATIC_SetMinimum(struct FNumericRange* Range, float Minimum);
		void STATIC_SetMaximum(struct FNumericRange* Range, float Maximum);
		bool STATIC_IsWithin(const struct FNumericRange& Range, float Value);
		float STATIC_GetMinimum(const struct FNumericRange& Range);
		float STATIC_GetMaximum(const struct FNumericRange& Range);
		float STATIC_GenerateRandomNumber(const struct FNumericRange& Range);
		struct FNumericRange STATIC_CreateNumericRangeMinMax(float Minimum, float Maximum);
		struct FNumericRange STATIC_CreateNumericRange(float Value, float Variance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxRuntime.RenderActor
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class ARenderActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
