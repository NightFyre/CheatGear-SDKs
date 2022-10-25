#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
	 */
	struct UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params
	{
	public:
		EMagicLeapIdentityError                                    ResultCode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XNU1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FMagicLeapIdentityAttribute>                 AttributeValue;                                          // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
	 */
	struct UMagicLeapIdentity_RequestAttributeValueAsync_Params
	{
	public:
		TArray<EMagicLeapIdentityKey>                              RequestedAttributeList;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ResultDelegate;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EMagicLeapIdentityError                                    ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
	 */
	struct UMagicLeapIdentity_RequestAttributeValue_Params
	{
	public:
		TArray<EMagicLeapIdentityKey>                              RequestedAttributeList;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FMagicLeapIdentityAttribute>                 RequestedAttributeValues;                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMagicLeapIdentityError                                    ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
	 */
	struct UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params
	{
	public:
		EMagicLeapIdentityError                                    ResultCode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OEN5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EMagicLeapIdentityKey>                              AttributesUpdatedSuccessfully;                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
	 */
	struct UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params
	{
	public:
		class FScriptDelegate                                      ResultDelegate;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
	 */
	struct UMagicLeapIdentity_GetAllAvailableAttributes_Params
	{
	public:
		TArray<EMagicLeapIdentityKey>                              AvailableAttributes;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMagicLeapIdentityError                                    ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
	 */
	struct UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params
	{
	public:
		EMagicLeapIdentityError                                    ResultCode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RLMG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EMagicLeapIdentityKey>                              AvailableAttributes;                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
