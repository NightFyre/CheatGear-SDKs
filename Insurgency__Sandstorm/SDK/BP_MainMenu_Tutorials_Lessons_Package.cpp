/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_Tutorials_Lessons_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnFocusReceived");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_Tutorials_Lessons_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnCustomNavigation");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.SetScrollHintOpacity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::SetScrollHintOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.SetScrollHintOpacity");
		
		UBP_MainMenu_Tutorials_Lessons_C_SetScrollHintOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_Tutorials_Lessons_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnKeyUp");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_Tutorials_Lessons_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnAnalogValueChanged");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.FindAndSelectLessonInList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Lesson                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::FindAndSelectLessonInList(class UClass* Lesson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.FindAndSelectLessonInList");
		
		UBP_MainMenu_Tutorials_Lessons_C_FindAndSelectLessonInList_Params params {};
		params.Lesson = Lesson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.FilterUnusedLessons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::FilterUnusedLessons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.FilterUnusedLessons");
		
		UBP_MainMenu_Tutorials_Lessons_C_FilterUnusedLessons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.GetCategoryLessonCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ELessonCategory                                    Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::GetCategoryLessonCount(ELessonCategory Category, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.GetCategoryLessonCount");
		
		UBP_MainMenu_Tutorials_Lessons_C_GetCategoryLessonCount_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.AddLessonButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Lesson                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelectOnAdd                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::AddLessonButton(class UClass* Lesson, bool bSelectOnAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.AddLessonButton");
		
		UBP_MainMenu_Tutorials_Lessons_C_AddLessonButton_Params params {};
		params.Lesson = Lesson;
		params.bSelectOnAdd = bSelectOnAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.PopulateLessonList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::PopulateLessonList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.PopulateLessonList");
		
		UBP_MainMenu_Tutorials_Lessons_C_PopulateLessonList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ViewSpecificLesson
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Lesson                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::ViewSpecificLesson(class UClass* Lesson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ViewSpecificLesson");
		
		UBP_MainMenu_Tutorials_Lessons_C_ViewSpecificLesson_Params params {};
		params.Lesson = Lesson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.UnloadLoadedMovies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::UnloadLoadedMovies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.UnloadLoadedMovies");
		
		UBP_MainMenu_Tutorials_Lessons_C_UnloadLoadedMovies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ClearMovie
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::ClearMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ClearMovie");
		
		UBP_MainMenu_Tutorials_Lessons_C_ClearMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.GetLocalPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UINSLocalPlayer*                             LocalPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::GetLocalPlayer(class UINSLocalPlayer** LocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.GetLocalPlayer");
		
		UBP_MainMenu_Tutorials_Lessons_C_GetLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalPlayer != nullptr)
			*LocalPlayer = params.LocalPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.AddCategoryButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELessonCategory                                    Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::AddCategoryButton(ELessonCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.AddCategoryButton");
		
		UBP_MainMenu_Tutorials_Lessons_C_AddCategoryButton_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.PressLessonButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::PressLessonButton(class UBP_MainMenu_Tutorials_Lessons_LessonButton_C* LessonButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.PressLessonButton");
		
		UBP_MainMenu_Tutorials_Lessons_C_PressLessonButton_Params params {};
		params.LessonButton = LessonButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.BndEvt__LessonCategoryTabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::BndEvt__LessonCategoryTabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.BndEvt__LessonCategoryTabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_C_BndEvt__LessonCategoryTabs_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnPanelClosed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::OnPanelClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnPanelClosed");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnPanelClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnPanelOpened");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.Tick");
		
		UBP_MainMenu_Tutorials_Lessons_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.Construct");
		
		UBP_MainMenu_Tutorials_Lessons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons");
		
		UBP_MainMenu_Tutorials_Lessons_C_ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnNavigateIngame__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::OnNavigateIngame__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnNavigateIngame__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnNavigateIngame__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Lessons_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Tutorials_Lessons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Tutorials_Lessons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials_Lessons.BP_MainMenu_Tutorials_Lessons_C");
		return ptr;
	}

}


