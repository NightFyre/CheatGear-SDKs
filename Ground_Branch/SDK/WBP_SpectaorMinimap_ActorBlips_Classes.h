#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_SpectaorMinimap_ActorBlips.WBP_SpectaorMinimap_ActorBlips_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UWBP_SpectaorMinimap_ActorBlips_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_Inner;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Outer;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_Minimap_Origin_C*                                MinimapOriginReference;                                  // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AActor*                                              ActorRef;                                                // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                Type;                                                    // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         Colour;                                                  // 0x0290(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         HoveredOuter;                                            // 0x02B8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         NormalOuter;                                             // 0x02E0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void UpdatePosition();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_WBP_SpectaorMinimap_ActorBlips(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
