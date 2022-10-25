/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 4 Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material_Instance_Dynamic                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Array_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_In                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Dynamic_Material_Instance                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Array_Index_Out                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_Out                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::Set_Per_Element_Layer_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int32_t Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int32_t* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 4 Base Material Parameters");
		
		APC_OakClothActor_C_Set_Per_Element_Layer_Base_Material_Parameters_Params params {};
		params.Material_Instance_Dynamic = Material_Instance_Dynamic;
		params.Array_Index = Array_Index;
		params.Default_Material_In = Default_Material_In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dynamic_Material_Instance != nullptr)
			*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
		if (Array_Index_Out != nullptr)
			*Array_Index_Out = params.Array_Index_Out;
		if (Default_Material_Out != nullptr)
			*Default_Material_Out = params.Default_Material_Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 3 Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material_Instance_Dynamic                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Array_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_In                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Dynamic_Material_Instance                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Array_Index_Out                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_Out                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::Set_Per_Element_Layer_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int32_t Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int32_t* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 3 Base Material Parameters");
		
		APC_OakClothActor_C_Set_Per_Element_Layer_Base_Material_Parameters_Params params {};
		params.Material_Instance_Dynamic = Material_Instance_Dynamic;
		params.Array_Index = Array_Index;
		params.Default_Material_In = Default_Material_In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dynamic_Material_Instance != nullptr)
			*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
		if (Array_Index_Out != nullptr)
			*Array_Index_Out = params.Array_Index_Out;
		if (Default_Material_Out != nullptr)
			*Default_Material_Out = params.Default_Material_Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 2 Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material_Instance_Dynamic                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Array_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_In                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Dynamic_Material_Instance                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Array_Index_Out                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_Out                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::Set_Per_Element_Layer_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int32_t Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int32_t* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 2 Base Material Parameters");
		
		APC_OakClothActor_C_Set_Per_Element_Layer_Base_Material_Parameters_Params params {};
		params.Material_Instance_Dynamic = Material_Instance_Dynamic;
		params.Array_Index = Array_Index;
		params.Default_Material_In = Default_Material_In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dynamic_Material_Instance != nullptr)
			*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
		if (Array_Index_Out != nullptr)
			*Array_Index_Out = params.Array_Index_Out;
		if (Default_Material_Out != nullptr)
			*Default_Material_Out = params.Default_Material_Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Randomized Colorization
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material_Instance_Dynamic                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Material_Instance_Dynamic_Out                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Material_ID_Out                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_Out                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::Set_Randomized_Colorization(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int32_t MaterialID, class UMaterialInstanceDynamic* Default_Material, class UMaterialInstanceDynamic** Material_Instance_Dynamic_Out, int32_t* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Randomized Colorization");
		
		APC_OakClothActor_C_Set_Randomized_Colorization_Params params {};
		params.Material_Instance_Dynamic = Material_Instance_Dynamic;
		params.MaterialID = MaterialID;
		params.Default_Material = Default_Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material_Instance_Dynamic_Out != nullptr)
			*Material_Instance_Dynamic_Out = params.Material_Instance_Dynamic_Out;
		if (Material_ID_Out != nullptr)
			*Material_ID_Out = params.Material_ID_Out;
		if (Default_Material_Out != nullptr)
			*Default_Material_Out = params.Default_Material_Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material_Instance_Dynamic                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Array_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Dynamic_Material_Instance                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Material_ID_Out                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Default_Material_Out                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::Set_Per_Element_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int32_t Array_Index, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int32_t* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Base Material Parameters");
		
		APC_OakClothActor_C_Set_Per_Element_Base_Material_Parameters_Params params {};
		params.Material_Instance_Dynamic = Material_Instance_Dynamic;
		params.Array_Index = Array_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dynamic_Material_Instance != nullptr)
			*Dynamic_Material_Instance = params.Dynamic_Material_Instance;
		if (Material_ID_Out != nullptr)
			*Material_ID_Out = params.Material_ID_Out;
		if (Default_Material_Out != nullptr)
			*Default_Material_Out = params.Default_Material_Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Create Dynamic Material Instance
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material_Instance_Interface                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Element_Index                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMeshComponent*                              Mesh_Component                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Material_Instance_Dynamic                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Material_ID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::Create_Dynamic_Material_Instance(class UMaterialInterface* Material_Instance_Interface, int32_t Element_Index, class UMeshComponent* Mesh_Component, class UMaterialInstanceDynamic** Material_Instance_Dynamic, int32_t* Material_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Create Dynamic Material Instance");
		
		APC_OakClothActor_C_Create_Dynamic_Material_Instance_Params params {};
		params.Material_Instance_Interface = Material_Instance_Interface;
		params.Element_Index = Element_Index;
		params.Mesh_Component = Mesh_Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material_Instance_Dynamic != nullptr)
			*Material_Instance_Dynamic = params.Material_Instance_Dynamic;
		if (Material_ID != nullptr)
			*Material_ID = params.Material_ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Level ColorScheme
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APC_OakClothActor_C::Set_Level_ColorScheme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Level ColorScheme");
		
		APC_OakClothActor_C_Set_Level_ColorScheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Per Instance Master Material Parameters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Target_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::Per_Instance_Master_Material_Parameters(class UMeshComponent* Target_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Per Instance Master Material Parameters");
		
		APC_OakClothActor_C_Per_Instance_Master_Material_Parameters_Params params {};
		params.Target_Component = Target_Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APC_OakClothActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.UserConstructionScript");
		
		APC_OakClothActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APC_OakClothActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APC_OakClothActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PC_OakClothActor.PC_OakClothActor_C");
		return ptr;
	}

}


