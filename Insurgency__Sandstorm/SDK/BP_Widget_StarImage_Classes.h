#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_Widget_StarImage.BP_Widget_StarImage_C
	 * Size -> 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
	 */
	class UBP_Widget_StarImage_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              StarImageWidget;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      StarFraction;                                            // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_GDLC[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          StarEmpty;                                               // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          StarQuarter;                                             // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          StarHalf;                                                // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          StarThreeQuarters;                                       // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          StarFull;                                                // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateStarAppearance();
		void SetStarFraction(float NewStarFraction);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_Widget_StarImage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
