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
	 * WidgetBlueprintGeneratedClass BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C
	 * Size -> 0x0039 (FullSize[0x0269] - InheritedSize[0x0230])
	 */
	class UBP_PlayMenu_PlaylistBG_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            Container;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWidget*>                                     WidgetList;                                              // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       bOpenImmediate;                                          // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CHRZ[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CurrentTexture;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bStore;                                                  // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetNextOpenImmediate();
		void OnNewImageTransitioned(class UWidget* Widget);
		void TransitionTo(class UTexture2D* Texture);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BP_PlayMenu_PlaylistBG(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
