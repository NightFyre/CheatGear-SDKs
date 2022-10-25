#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C
	 * Size -> 0x04E8 (FullSize[0x0718] - InheritedSize[0x0230])
	 */
	class UWBP_CaptureStatus_FlagIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bg;                                                      // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconFrame;                                               // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         IconFrameNoTeam;                                         // 0x0250(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         BgNoTeam;                                                // 0x02D8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         IconLocked;                                              // 0x0360(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         IconFlag;                                                // 0x03E8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         IconFrameEnemy;                                          // 0x0470(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      IconOpacityCapturable;                                   // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IconOpacityUncapturable;                                 // 0x04FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IconOpacityOffensive;                                    // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5MYX[0x4];                                   // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         IconFrameFriendly;                                       // 0x0508(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         BgEnemy;                                                 // 0x0590(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         BgFriendly;                                              // 0x0618(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorFriendly;                                           // 0x06A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorEnemy;                                              // 0x06C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorNoTeam;                                             // 0x06F0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetBrushOpacityByCaptureStatus(struct FSlateBrush* BrushToUpdate, bool bLocked, EHDControlPointObjectiveType ObjType, struct FSlateBrush* NewBrush);
		void TintBrushByTeam(struct FSlateBrush* BrushToTint, EHDTeam Team, struct FSlateBrush* NewBrush);
		void UpdateBrushesByTeam(bool bLocked, EHDTeam Team, EHDControlPointObjectiveType ObjType);
		void SetBrushes(struct FSlateBrush* IconFrame, struct FSlateBrush* Bg, struct FSlateBrush* Icon);
		void OnUpdateIcon(bool bActive, EHDTeam Team, bool bLocked, EHDControlPointObjectiveType ObjType);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_CaptureStatus_FlagIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
