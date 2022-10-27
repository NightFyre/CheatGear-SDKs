/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.PreEditProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyValue                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFActorInterface::PreEditProperty(const class FString& PropertyName, const class FString& PropertyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.PreEditProperty");
		
		UHFActorInterface_PreEditProperty_Params params {};
		params.PropertyName = PropertyName;
		params.PropertyValue = PropertyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.PostEditProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyValue                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFActorInterface::PostEditProperty(const class FString& PropertyName, const class FString& PropertyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.PostEditProperty");
		
		UHFActorInterface_PostEditProperty_Params params {};
		params.PropertyName = PropertyName;
		params.PropertyValue = PropertyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.OnSelected
	 * 		Flags  -> ()
	 */
	void UHFActorInterface::OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.OnSelected");
		
		UHFActorInterface_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.OnSaved
	 * 		Flags  -> ()
	 */
	void UHFActorInterface::OnSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.OnSaved");
		
		UHFActorInterface_OnSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.OnLoaded
	 * 		Flags  -> ()
	 */
	void UHFActorInterface::OnLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.OnLoaded");
		
		UHFActorInterface_OnLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.OnEndEdit
	 * 		Flags  -> ()
	 */
	void UHFActorInterface::OnEndEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.OnEndEdit");
		
		UHFActorInterface_OnEndEdit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.OnDeselected
	 * 		Flags  -> ()
	 */
	void UHFActorInterface::OnDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.OnDeselected");
		
		UHFActorInterface_OnDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.OnBeginEdit
	 * 		Flags  -> ()
	 */
	void UHFActorInterface::OnBeginEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.OnBeginEdit");
		
		UHFActorInterface_OnBeginEdit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.GetPlacementTranslate
	 * 		Flags  -> ()
	 */
	struct FVector UHFActorInterface::GetPlacementTranslate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.GetPlacementTranslate");
		
		UHFActorInterface_GetPlacementTranslate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.GetCustomPropertyWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFActorInterface::GetCustomPropertyWidget(const class FString& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.GetCustomPropertyWidget");
		
		UHFActorInterface_GetCustomPropertyWidget_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFActorInterface.GetCustomDetailWidgets
	 * 		Flags  -> ()
	 */
	void UHFActorInterface::GetCustomDetailWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFActorInterface.GetCustomDetailWidgets");
		
		UHFActorInterface_GetCustomDetailWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFDragDropOperation.GetViewportPosition
	 * 		Flags  -> ()
	 */
	struct FVector2D UHFDragDropOperation::GetViewportPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFDragDropOperation.GetViewportPosition");
		
		UHFDragDropOperation_GetViewportPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFDragDropOperation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFDragDropOperation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFDragDropOperation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.SpawnActorsFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHFSave*                                     SaveFile                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActorTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> UHFFunctionLibrary::SpawnActorsFromFile(class UObject* WorldContextObject, class UHFSave* SaveFile, const class FName& ActorTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.SpawnActorsFromFile");
		
		UHFFunctionLibrary_SpawnActorsFromFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SaveFile = SaveFile;
		params.ActorTag = ActorTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.SortActorArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorArray                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAscendingOrder                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bByClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorArrayRef                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::SortActorArray(TArray<class AActor*>* ActorArray, bool bAscendingOrder, bool bByClass, TArray<class AActor*>* ActorArrayRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.SortActorArray");
		
		UHFFunctionLibrary_SortActorArray_Params params {};
		params.bAscendingOrder = bAscendingOrder;
		params.bByClass = bByClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorArray != nullptr)
			*ActorArray = params.ActorArray;
		if (ActorArrayRef != nullptr)
			*ActorArrayRef = params.ActorArrayRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.SetShapeDrawOnlyIfSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShapeComponent*                             Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewDrawOnlyIfSelected                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::SetShapeDrawOnlyIfSelected(class UShapeComponent* Target, bool bNewDrawOnlyIfSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.SetShapeDrawOnlyIfSelected");
		
		UHFFunctionLibrary_SetShapeDrawOnlyIfSelected_Params params {};
		params.Target = Target;
		params.bNewDrawOnlyIfSelected = bNewDrawOnlyIfSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.SetShapeColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShapeComponent*                             Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      NewColour                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::SetShapeColour(class UShapeComponent* Target, const struct FColor& NewColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.SetShapeColour");
		
		UHFFunctionLibrary_SetShapeColour_Params params {};
		params.Target = Target;
		params.NewColour = NewColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.MakeUniqueActorName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BaseActorName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ExistingActorNames                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FName UHFFunctionLibrary::MakeUniqueActorName(const class FString& BaseActorName, TArray<class FString> ExistingActorNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.MakeUniqueActorName");
		
		UHFFunctionLibrary_MakeUniqueActorName_Params params {};
		params.BaseActorName = BaseActorName;
		params.ExistingActorNames = ExistingActorNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.LoadFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHFSave* UHFFunctionLibrary::LoadFile(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.LoadFile");
		
		UHFFunctionLibrary_LoadFile_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.DrawSolidBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::DrawSolidBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotation, const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.DrawSolidBox");
		
		UHFFunctionLibrary_DrawSolidBox_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Center = Center;
		params.Extent = Extent;
		params.Rotation = Rotation;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.DrawLines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Starts                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Ends                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::DrawLines(class UObject* WorldContextObject, TArray<struct FVector> Starts, TArray<struct FVector> Ends, const struct FLinearColor& Color, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.DrawLines");
		
		UHFFunctionLibrary_DrawLines_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Starts = Starts;
		params.Ends = Ends;
		params.Color = Color;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.DrawLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::DrawLine(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.DrawLine");
		
		UHFFunctionLibrary_DrawLine_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.DrawArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ArrowSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::DrawArrow(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color, float ArrowSize, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.DrawArrow");
		
		UHFFunctionLibrary_DrawArrow_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		params.ArrowSize = ArrowSize;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.DirectSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHFSave*                                     SaveObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHFFunctionLibrary::DirectSave(class UHFSave* SaveObject, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.DirectSave");
		
		UHFFunctionLibrary_DirectSave_Params params {};
		params.SaveObject = SaveObject;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.DebugGameViewportClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::DebugGameViewportClient(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.DebugGameViewportClient");
		
		UHFFunctionLibrary_DebugGameViewportClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.ClearActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActorTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::ClearActors(class UObject* WorldContextObject, const class FName& ActorTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.ClearActors");
		
		UHFFunctionLibrary_ClearActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorTag = ActorTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFFunctionLibrary.AsyncSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHFSave*                                     SaveObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActorTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SavedDelegate                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHFFunctionLibrary::AsyncSave(class UObject* WorldContextObject, class UHFSave* SaveObject, const class FString& Filename, const class FName& ActorTag, const class FScriptDelegate& SavedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFFunctionLibrary.AsyncSave");
		
		UHFFunctionLibrary_AsyncSave_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SaveObject = SaveObject;
		params.Filename = Filename;
		params.ActorTag = ActorTag;
		params.SavedDelegate = SavedDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.UpdateGizmos
	 * 		Flags  -> ()
	 */
	void AHFManager::UpdateGizmos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.UpdateGizmos");
		
		AHFManager_UpdateGizmos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SpawnPlaceableActorAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActorTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHFManager::SpawnPlaceableActorAt(class UClass* ActorClass, const struct FVector2D& ScreenPosition, const class FName& ActorTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SpawnPlaceableActorAt");
		
		AHFManager_SpawnPlaceableActorAt_Params params {};
		params.ActorClass = ActorClass;
		params.ScreenPosition = ScreenPosition;
		params.ActorTag = ActorTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SnapSelectedToFloor
	 * 		Flags  -> ()
	 */
	void AHFManager::SnapSelectedToFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SnapSelectedToFloor");
		
		AHFManager_SnapSelectedToFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetSnapToWorldGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewSnapToWorldGrid                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetSnapToWorldGrid(bool bNewSnapToWorldGrid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetSnapToWorldGrid");
		
		AHFManager_SetSnapToWorldGrid_Params params {};
		params.bNewSnapToWorldGrid = bNewSnapToWorldGrid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetShowBlockalls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetShowBlockalls(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetShowBlockalls");
		
		AHFManager_SetShowBlockalls_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetSelectedActorsSharedPropertyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyValue                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetSelectedActorsSharedPropertyValue(const class FString& PropertyName, const class FString& PropertyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetSelectedActorsSharedPropertyValue");
		
		AHFManager_SetSelectedActorsSharedPropertyValue_Params params {};
		params.PropertyName = PropertyName;
		params.PropertyValue = PropertyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetSelectedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewSelectedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetSelectedActor(class AActor* NewSelectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetSelectedActor");
		
		AHFManager_SetSelectedActor_Params params {};
		params.NewSelectedActor = NewSelectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetSelectActorEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetSelectActorEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetSelectActorEnabled");
		
		AHFManager_SetSelectActorEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetLocalCoordinateSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetLocalCoordinateSystem(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetLocalCoordinateSystem");
		
		AHFManager_SetLocalCoordinateSystem_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetGridSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewGridSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetGridSize(float NewGridSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetGridSize");
		
		AHFManager_SetGridSize_Params params {};
		params.NewGridSize = NewGridSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetGizmoMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHGGizmoMethod                                     Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetGizmoMethod(EHGGizmoMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetGizmoMethod");
		
		AHFManager_SetGizmoMethod_Params params {};
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetFlyingSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetFlyingSpeed(float NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetFlyingSpeed");
		
		AHFManager_SetFlyingSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetAxisScreenPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetAxisScreenPos(const struct FVector2D& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetAxisScreenPos");
		
		AHFManager_SetAxisScreenPos_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.SetActorClassToSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::SetActorClassToSpawn(class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.SetActorClassToSpawn");
		
		AHFManager_SetActorClassToSpawn_Params params {};
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.RenameSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutError                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHFManager::RenameSelected(const class FString& NewName, class FString* OutError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.RenameSelected");
		
		AHFManager_RenameSelected_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutError != nullptr)
			*OutError = params.OutError;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.RemoveSelectedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::RemoveSelectedActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.RemoveSelectedActor");
		
		AHFManager_RemoveSelectedActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.RefreshLoadedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActorTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::RefreshLoadedActors(const class FName& ActorTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.RefreshLoadedActors");
		
		AHFManager_RefreshLoadedActors_Params params {};
		params.ActorTag = ActorTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.OnMouseButtonInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHFManager::OnMouseButtonInput(const struct FPointerEvent& PointerEvent, EInputEvent Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.OnMouseButtonInput");
		
		AHFManager_OnMouseButtonInput_Params params {};
		params.PointerEvent = PointerEvent;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.OnInputKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHFManager::OnInputKey(const struct FKeyEvent& KeyEvent, EInputEvent Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.OnInputKey");
		
		AHFManager_OnInputKey_Params params {};
		params.KeyEvent = KeyEvent;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.OnInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AHFManager::OnInputAxis(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.OnInputAxis");
		
		AHFManager_OnInputAxis_Params params {};
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InternalUpdateGizmos
	 * 		Flags  -> ()
	 */
	void AHFManager::InternalUpdateGizmos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InternalUpdateGizmos");
		
		AHFManager_InternalUpdateGizmos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InputSnapSelectedToFloor
	 * 		Flags  -> ()
	 */
	void AHFManager::InputSnapSelectedToFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InputSnapSelectedToFloor");
		
		AHFManager_InputSnapSelectedToFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InputRenameSelected
	 * 		Flags  -> ()
	 */
	void AHFManager::InputRenameSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InputRenameSelected");
		
		AHFManager_InputRenameSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InputPasteSelectedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAtLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::InputPasteSelectedActors(bool bAtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InputPasteSelectedActors");
		
		AHFManager_InputPasteSelectedActors_Params params {};
		params.bAtLocation = bAtLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InputFocusOnSelected
	 * 		Flags  -> ()
	 */
	void AHFManager::InputFocusOnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InputFocusOnSelected");
		
		AHFManager_InputFocusOnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InputDeleteSelectedActors
	 * 		Flags  -> ()
	 */
	void AHFManager::InputDeleteSelectedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InputDeleteSelectedActors");
		
		AHFManager_InputDeleteSelectedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InputCutSelectedActors
	 * 		Flags  -> ()
	 */
	void AHFManager::InputCutSelectedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InputCutSelectedActors");
		
		AHFManager_InputCutSelectedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.InputCopySelectedActors
	 * 		Flags  -> ()
	 */
	void AHFManager::InputCopySelectedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.InputCopySelectedActors");
		
		AHFManager_InputCopySelectedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.GetSnapToWorldGrid
	 * 		Flags  -> ()
	 */
	bool AHFManager::GetSnapToWorldGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.GetSnapToWorldGrid");
		
		AHFManager_GetSnapToWorldGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.GetSharedProperties
	 * 		Flags  -> ()
	 */
	TArray<struct FHFSharedProperty> AHFManager::GetSharedProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.GetSharedProperties");
		
		AHFManager_GetSharedProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.GetSharedCustomDetailWidgets
	 * 		Flags  -> ()
	 */
	void AHFManager::GetSharedCustomDetailWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.GetSharedCustomDetailWidgets");
		
		AHFManager_GetSharedCustomDetailWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.GetSelectedActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> AHFManager::GetSelectedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.GetSelectedActors");
		
		AHFManager_GetSelectedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.GetGridSize
	 * 		Flags  -> ()
	 */
	float AHFManager::GetGridSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.GetGridSize");
		
		AHFManager_GetGridSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.FocusOnSelected
	 * 		Flags  -> ()
	 */
	void AHFManager::FocusOnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.FocusOnSelected");
		
		AHFManager_FocusOnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.Exit
	 * 		Flags  -> ()
	 */
	void AHFManager::Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.Exit");
		
		AHFManager_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.EnablePlayerInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::EnablePlayerInput(bool bNewValue, bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.EnablePlayerInput");
		
		AHFManager_EnablePlayerInput_Params params {};
		params.bNewValue = bNewValue;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.ClearSelectedActors
	 * 		Flags  -> ()
	 */
	void AHFManager::ClearSelectedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.ClearSelectedActors");
		
		AHFManager_ClearSelectedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBHotFoot.HFManager.AddSelectedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHFManager::AddSelectedActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBHotFoot.HFManager.AddSelectedActor");
		
		AHFManager_AddSelectedActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHFManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHFManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFSave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFSave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFSave");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFSelectActorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFSelectActorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFSelectActorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFSelectActorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFSelectActorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFSelectActorTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFSpawnActorToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFSpawnActorToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFSpawnActorToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHFSpawnActorTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHFSpawnActorTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBHotFoot.HFSpawnActorTool");
		return ptr;
	}

}


