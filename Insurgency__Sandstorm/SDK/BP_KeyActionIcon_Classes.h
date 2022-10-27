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
	 * WidgetBlueprintGeneratedClass BP_KeyActionIcon.BP_KeyActionIcon_C
	 * Size -> 0x00CA (FullSize[0x02FA] - InheritedSize[0x0230])
	 */
	class UBP_KeyActionIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKeyIconWidget*                                      KeyWidget;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FKey                                                DefaultKey;                                              // 0x0240(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		class FName                                                DefaultAction;                                           // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       VisibleToController;                                     // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       VisibleToKeyboard;                                       // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M98G[0x2];                                   // 0x0262(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultAxisScale;                                        // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bIsAxis;                                                 // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_9GEQ[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLessonInputAction                                  Input;                                                   // 0x0270(0x0070) Edit, BlueprintVisible, ExposeOnSpawn
		class FName                                                ToggleAction;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnIconRebuit;                                            // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bShowWhenUnbound;                                        // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bBindToControllerInput;                                  // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetIsUsingController(bool bUsingController, EeInputIconType IconType);
		void BindControllerDelegates();
		void SetBindings(TArray<struct FLessonInputBinding>* NewBindings);
		void HasIcon(bool* bHasIcon);
		void SetKey(const struct FKey& NewFallbackKey);
		void SetupInputData();
		void RebuildIcon();
		void SetActions(TArray<class FName>* Actions);
		void SetAction(const class FName& ActionName, const class FName& ToggleActionName);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BP_KeyActionIcon(int32_t EntryPoint);
		void OnIconRebuit__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
