#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum VaRestPlugin.EVaJson
	 */
	enum class EVaJson : uint8_t
	{
		None    = 0,
		Null    = 1,
		String  = 2,
		Number  = 3,
		Boolean = 4,
		Array   = 5,
		Object  = 6,
		MAX     = 7
	};

	/**
	 * Enum VaRestPlugin.ERequestStatus
	 */
	enum class ERequestStatus : uint8_t
	{
		NotStarted             = 0,
		Processing             = 1,
		Failed                 = 2,
		Failed_ConnectionError = 3,
		Succeeded              = 4,
		MAX                    = 5
	};

	/**
	 * Enum VaRestPlugin.ERequestContentType
	 */
	enum class ERequestContentType : uint8_t
	{
		x_www_form_urlencoded_url  = 0,
		x_www_form_urlencoded_body = 1,
		json                       = 2,
		binary                     = 3,
		MAX                        = 4
	};

	/**
	 * Enum VaRestPlugin.ERequestVerb
	 */
	enum class ERequestVerb : uint8_t
	{
		GET    = 0,
		POST   = 1,
		PUT    = 2,
		DEL    = 3,
		CUSTOM = 4,
		MAX    = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VaRestPlugin.VaRestCallResponse
	 * Size -> 0x0030
	 */
	struct FVaRestCallResponse
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AS83[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
