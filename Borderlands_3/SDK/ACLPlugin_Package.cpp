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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UACLStatsDumpCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UACLStatsDumpCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimCompress_ACLBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCompress_ACLBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimCompress_ACL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCompress_ACL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimCompress_ACLCustom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCompress_ACLCustom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLCustom");
		return ptr;
	}

}


