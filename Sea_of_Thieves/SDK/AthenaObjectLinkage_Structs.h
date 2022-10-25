#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AthenaObjectLinkage.EAddLinkResult
	 */
	enum class EAddLinkResult : uint8_t
	{
		Success_Set                    = 0,
		Success_Pending                = 1,
		Failed_SourceEndpointIdInvalid = 2,
		Failed_TargetEndpointIdInvalid = 3,
		Failed_CoincidentEndpointIds   = 4,
		Failed_Duplicate               = 5,
		MAX                            = 6
	};

	/**
	 * Enum AthenaObjectLinkage.EAddEndpointResult
	 */
	enum class EAddEndpointResult : uint8_t
	{
		Success                                 = 0,
		Failed_InvalidInstance                  = 1,
		Failed_InvalidId                        = 2,
		Failed_DuplicateId                      = 3,
		Failed_DoesntImplementEndpointInterface = 4,
		MAX                                     = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaObjectLinkage.LinkEndpointId
	 * Size -> 0x0008
	 */
	struct FLinkEndpointId
	{
	public:
		class FName                                                Raw;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
