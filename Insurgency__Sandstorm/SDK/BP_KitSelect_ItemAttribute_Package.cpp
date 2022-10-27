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
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateAttributeInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemAttribute_C::UpdateAttributeInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateAttributeInfo");
		
		UBP_KitSelect_ItemAttribute_C_UpdateAttributeInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.CreateAttributeImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         ImagesList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UHorizontalBox*                              HorizontalBox                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemAttribute_C::CreateAttributeImage(TArray<class UUserWidget*>* ImagesList, class UHorizontalBox* HorizontalBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.CreateAttributeImage");
		
		UBP_KitSelect_ItemAttribute_C_CreateAttributeImage_Params params {};
		params.HorizontalBox = HorizontalBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImagesList != nullptr)
			*ImagesList = params.ImagesList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.SetImages
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          ImagesHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class UTexture2D*>                          ImagesSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemAttribute_C::SetImages(TArray<class UTexture2D*>* ImagesHovered, TArray<class UTexture2D*>* ImagesSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.SetImages");
		
		UBP_KitSelect_ItemAttribute_C_SetImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImagesHovered != nullptr)
			*ImagesHovered = params.ImagesHovered;
		if (ImagesSelected != nullptr)
			*ImagesSelected = params.ImagesSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateAttributeStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoadoutAttributeType                              NewAttributeType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemAttribute_C::UpdateAttributeStyle(ELoadoutAttributeType NewAttributeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateAttributeStyle");
		
		UBP_KitSelect_ItemAttribute_C_UpdateAttributeStyle_Params params {};
		params.NewAttributeType = NewAttributeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.GetAttributeDifferenceBrush
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_KitSelect_ItemAttribute_C::GetAttributeDifferenceBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.GetAttributeDifferenceBrush");
		
		UBP_KitSelect_ItemAttribute_C_GetAttributeDifferenceBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateHoverDifferenceAngleAndTranslation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemAttribute_C::UpdateHoverDifferenceAngleAndTranslation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateHoverDifferenceAngleAndTranslation");
		
		UBP_KitSelect_ItemAttribute_C_UpdateHoverDifferenceAngleAndTranslation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.GetAttributeDifferenceVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_KitSelect_ItemAttribute_C::GetAttributeDifferenceVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.GetAttributeDifferenceVisibility");
		
		UBP_KitSelect_ItemAttribute_C_GetAttributeDifferenceVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemAttribute_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.Tick");
		
		UBP_KitSelect_ItemAttribute_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_ItemAttribute_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.PreConstruct");
		
		UBP_KitSelect_ItemAttribute_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemAttribute_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.Construct");
		
		UBP_KitSelect_ItemAttribute_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.DoSetImages
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          ImagesSelected                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class UTexture2D*>                          ImagesHovered                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemAttribute_C::DoSetImages(TArray<class UTexture2D*> ImagesSelected, TArray<class UTexture2D*> ImagesHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.DoSetImages");
		
		UBP_KitSelect_ItemAttribute_C_DoSetImages_Params params {};
		params.ImagesSelected = ImagesSelected;
		params.ImagesHovered = ImagesHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.ExecuteUbergraph_BP_KitSelect_ItemAttribute
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemAttribute_C::ExecuteUbergraph_BP_KitSelect_ItemAttribute(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.ExecuteUbergraph_BP_KitSelect_ItemAttribute");
		
		UBP_KitSelect_ItemAttribute_C_ExecuteUbergraph_BP_KitSelect_ItemAttribute_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_ItemAttribute_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_ItemAttribute_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C");
		return ptr;
	}

}


