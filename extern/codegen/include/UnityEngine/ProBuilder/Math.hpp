// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Bounds2D
  class Bounds2D;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Normal
  struct Normal;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Bounds
  struct Bounds;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IComparable`1 because it is already included!
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Math
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Math : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Math
    Math() noexcept {}
    // static field const value: static public System.Single phi
    static constexpr const float phi = 1.618034;
    // Get static field: static public System.Single phi
    static float _get_phi();
    // Set static field: static public System.Single phi
    static void _set_phi(float value);
    // static field const value: static private System.Single k_FltEpsilon
    static constexpr const float k_FltEpsilon = 1e-45;
    // Get static field: static private System.Single k_FltEpsilon
    static float _get_k_FltEpsilon();
    // Set static field: static private System.Single k_FltEpsilon
    static void _set_k_FltEpsilon(float value);
    // static field const value: static private System.Single k_FltCompareEpsilon
    static constexpr const float k_FltCompareEpsilon = 0.0001;
    // Get static field: static private System.Single k_FltCompareEpsilon
    static float _get_k_FltCompareEpsilon();
    // Set static field: static private System.Single k_FltCompareEpsilon
    static void _set_k_FltCompareEpsilon(float value);
    // static field const value: static System.Single handleEpsilon
    static constexpr const float handleEpsilon = 0.0001;
    // Get static field: static System.Single handleEpsilon
    static float _get_handleEpsilon();
    // Set static field: static System.Single handleEpsilon
    static void _set_handleEpsilon(float value);
    // Get static field: static private UnityEngine.Vector3 tv1
    static UnityEngine::Vector3 _get_tv1();
    // Set static field: static private UnityEngine.Vector3 tv1
    static void _set_tv1(UnityEngine::Vector3 value);
    // Get static field: static private UnityEngine.Vector3 tv2
    static UnityEngine::Vector3 _get_tv2();
    // Set static field: static private UnityEngine.Vector3 tv2
    static void _set_tv2(UnityEngine::Vector3 value);
    // Get static field: static private UnityEngine.Vector3 tv3
    static UnityEngine::Vector3 _get_tv3();
    // Set static field: static private UnityEngine.Vector3 tv3
    static void _set_tv3(UnityEngine::Vector3 value);
    // Get static field: static private UnityEngine.Vector3 tv4
    static UnityEngine::Vector3 _get_tv4();
    // Set static field: static private UnityEngine.Vector3 tv4
    static void _set_tv4(UnityEngine::Vector3 value);
    // static UnityEngine.Vector2 PointInCircumference(System.Single radius, System.Single angleInDegrees, UnityEngine.Vector2 origin)
    // Offset: 0x19BD368
    static UnityEngine::Vector2 PointInCircumference(float radius, float angleInDegrees, UnityEngine::Vector2 origin);
    // static UnityEngine.Vector3 PointInSphere(System.Single radius, System.Single latitudeAngle, System.Single longitudeAngle)
    // Offset: 0x19BD438
    static UnityEngine::Vector3 PointInSphere(float radius, float latitudeAngle, float longitudeAngle);
    // static System.Single SignedAngle(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x19BD538
    static float SignedAngle(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // static public System.Single SqrDistance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x19BD5E4
    static float SqrDistance(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static public System.Single TriangleArea(UnityEngine.Vector3 x, UnityEngine.Vector3 y, UnityEngine.Vector3 z)
    // Offset: 0x19BD608
    static float TriangleArea(UnityEngine::Vector3 x, UnityEngine::Vector3 y, UnityEngine::Vector3 z);
    // static System.Single PolygonArea(UnityEngine.Vector3[] vertices, System.Int32[] indexes)
    // Offset: 0x19BD77C
    static float PolygonArea(::Array<UnityEngine::Vector3>* vertices, ::Array<int>* indexes);
    // static UnityEngine.Vector2 RotateAroundPoint(UnityEngine.Vector2 v, UnityEngine.Vector2 origin, System.Single theta)
    // Offset: 0x19BD89C
    static UnityEngine::Vector2 RotateAroundPoint(UnityEngine::Vector2 v, UnityEngine::Vector2 origin, float theta);
    // static public UnityEngine.Vector2 ScaleAroundPoint(UnityEngine.Vector2 v, UnityEngine.Vector2 origin, UnityEngine.Vector2 scale)
    // Offset: 0x19BD980
    static UnityEngine::Vector2 ScaleAroundPoint(UnityEngine::Vector2 v, UnityEngine::Vector2 origin, UnityEngine::Vector2 scale);
    // static UnityEngine.Vector2 Perpendicular(UnityEngine.Vector2 value)
    // Offset: 0x19BDA40
    static UnityEngine::Vector2 Perpendicular(UnityEngine::Vector2 value);
    // static public UnityEngine.Vector2 ReflectPoint(UnityEngine.Vector2 point, UnityEngine.Vector2 lineStart, UnityEngine.Vector2 lineEnd)
    // Offset: 0x19BDA78
    static UnityEngine::Vector2 ReflectPoint(UnityEngine::Vector2 point, UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd);
    // static System.Single SqrDistanceRayPoint(UnityEngine.Ray ray, UnityEngine.Vector3 point)
    // Offset: 0x19BDC54
    static float SqrDistanceRayPoint(UnityEngine::Ray ray, UnityEngine::Vector3 point);
    // static public System.Single DistancePointLineSegment(UnityEngine.Vector2 point, UnityEngine.Vector2 lineStart, UnityEngine.Vector2 lineEnd)
    // Offset: 0x19BDD74
    static float DistancePointLineSegment(UnityEngine::Vector2 point, UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd);
    // static public System.Single DistancePointLineSegment(UnityEngine.Vector3 point, UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd)
    // Offset: 0x19BDF70
    static float DistancePointLineSegment(UnityEngine::Vector3 point, UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd);
    // static public UnityEngine.Vector3 GetNearestPointRayRay(UnityEngine.Ray a, UnityEngine.Ray b)
    // Offset: 0x19BE224
    static UnityEngine::Vector3 GetNearestPointRayRay(UnityEngine::Ray a, UnityEngine::Ray b);
    // static UnityEngine.Vector3 GetNearestPointRayRay(UnityEngine.Vector3 ao, UnityEngine.Vector3 ad, UnityEngine.Vector3 bo, UnityEngine.Vector3 bd)
    // Offset: 0x19BE2E8
    static UnityEngine::Vector3 GetNearestPointRayRay(UnityEngine::Vector3 ao, UnityEngine::Vector3 ad, UnityEngine::Vector3 bo, UnityEngine::Vector3 bd);
    // static System.Boolean GetLineSegmentIntersect(UnityEngine.Vector2 p0, UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, UnityEngine.Vector2 p3, ref UnityEngine.Vector2 intersect)
    // Offset: 0x19BE5A4
    static bool GetLineSegmentIntersect(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, UnityEngine::Vector2 p3, UnityEngine::Vector2& intersect);
    // static System.Boolean GetLineSegmentIntersect(UnityEngine.Vector2 p0, UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, UnityEngine.Vector2 p3)
    // Offset: 0x19BE6D4
    static bool GetLineSegmentIntersect(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, UnityEngine::Vector2 p3);
    // static System.Boolean PointInPolygon(UnityEngine.Vector2[] polygon, UnityEngine.Vector2 point, System.Int32[] indexes)
    // Offset: 0x19BE748
    static bool PointInPolygon(::Array<UnityEngine::Vector2>* polygon, UnityEngine::Vector2 point, ::Array<int>* indexes);
    // static System.Boolean PointInPolygon(UnityEngine.Vector2[] positions, UnityEngine.ProBuilder.Bounds2D polyBounds, UnityEngine.ProBuilder.Edge[] edges, UnityEngine.Vector2 point)
    // Offset: 0x19BEA04
    static bool PointInPolygon(::Array<UnityEngine::Vector2>* positions, UnityEngine::ProBuilder::Bounds2D* polyBounds, ::Array<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::Vector2 point);
    // static System.Boolean PointInPolygon(UnityEngine.Vector3[] positions, UnityEngine.ProBuilder.Bounds2D polyBounds, UnityEngine.ProBuilder.Edge[] edges, UnityEngine.Vector2 point)
    // Offset: 0x19BEB68
    static bool PointInPolygon(::Array<UnityEngine::Vector3>* positions, UnityEngine::ProBuilder::Bounds2D* polyBounds, ::Array<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::Vector2 point);
    // static System.Boolean RectIntersectsLineSegment(UnityEngine.Rect rect, UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x19BED30
    static bool RectIntersectsLineSegment(UnityEngine::Rect rect, UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // static System.Boolean RectIntersectsLineSegment(UnityEngine.Rect rect, UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x19BED38
    static bool RectIntersectsLineSegment(UnityEngine::Rect rect, UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static public System.Boolean RayIntersectsTriangle(UnityEngine.Ray InRay, UnityEngine.Vector3 InTriangleA, UnityEngine.Vector3 InTriangleB, UnityEngine.Vector3 InTriangleC, out System.Single OutDistance, out UnityEngine.Vector3 OutPoint)
    // Offset: 0x19B7758
    static bool RayIntersectsTriangle(UnityEngine::Ray InRay, UnityEngine::Vector3 InTriangleA, UnityEngine::Vector3 InTriangleB, UnityEngine::Vector3 InTriangleC, float& OutDistance, UnityEngine::Vector3& OutPoint);
    // static System.Boolean RayIntersectsTriangle2(UnityEngine.Vector3 origin, UnityEngine.Vector3 dir, UnityEngine.Vector3 vert0, UnityEngine.Vector3 vert1, UnityEngine.Vector3 vert2, ref System.Single distance, ref UnityEngine.Vector3 normal)
    // Offset: 0x19B8D60
    static bool RayIntersectsTriangle2(UnityEngine::Vector3 origin, UnityEngine::Vector3 dir, UnityEngine::Vector3 vert0, UnityEngine::Vector3 vert1, UnityEngine::Vector3 vert2, float& distance, UnityEngine::Vector3& normal);
    // static public System.Single Secant(System.Single x)
    // Offset: 0x19BED8C
    static float Secant(float x);
    // static public UnityEngine.Vector3 Normal(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x19BEE04
    static UnityEngine::Vector3 Normal(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2);
    // static UnityEngine.Vector3 Normal(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x19BEFC0
    static UnityEngine::Vector3 Normal(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector3 Normal(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x19BF79C
    static UnityEngine::Vector3 Normal(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static UnityEngine.Vector3 Normal(System.Collections.Generic.IList`1<UnityEngine.Vector3> p)
    // Offset: 0x19BF9F0
    static UnityEngine::Vector3 Normal(System::Collections::Generic::IList_1<UnityEngine::Vector3>* p);
    // static public UnityEngine.ProBuilder.Normal NormalTangentBitangent(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x19B9C78
    static UnityEngine::ProBuilder::Normal NormalTangentBitangent(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static System.Boolean IsCardinalAxis(UnityEngine.Vector3 v, System.Single epsilon)
    // Offset: 0x19C0100
    static bool IsCardinalAxis(UnityEngine::Vector3 v, float epsilon);
    // static UnityEngine.Vector2 DivideBy(UnityEngine.Vector2 v, UnityEngine.Vector2 o)
    // Offset: 0x19C02F4
    static UnityEngine::Vector2 DivideBy(UnityEngine::Vector2 v, UnityEngine::Vector2 o);
    // static UnityEngine.Vector3 DivideBy(UnityEngine.Vector3 v, UnityEngine.Vector3 o)
    // Offset: 0x19C0328
    static UnityEngine::Vector3 DivideBy(UnityEngine::Vector3 v, UnityEngine::Vector3 o);
    // static T Max(T[] array)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Max(::Array<T>* array) {
      static_assert(std::is_base_of_v<System::IComparable_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Math::Max");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Math", "Max", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(array)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array);
    }
    // static T Min(T[] array)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Min(::Array<T>* array) {
      static_assert(std::is_base_of_v<System::IComparable_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Math::Min");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Math", "Min", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(array)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array);
    }
    // static System.Single LargestValue(UnityEngine.Vector3 v)
    // Offset: 0x19C0368
    static float LargestValue(UnityEngine::Vector3 v);
    // static System.Single LargestValue(UnityEngine.Vector2 v)
    // Offset: 0x19C038C
    static float LargestValue(UnityEngine::Vector2 v);
    // static UnityEngine.Vector2 SmallestVector2(UnityEngine.Vector2[] v)
    // Offset: 0x19C0398
    static UnityEngine::Vector2 SmallestVector2(::Array<UnityEngine::Vector2>* v);
    // static UnityEngine.Vector2 SmallestVector2(UnityEngine.Vector2[] v, System.Int32[] indexes)
    // Offset: 0x19C0418
    static UnityEngine::Vector2 SmallestVector2(::Array<UnityEngine::Vector2>* v, ::Array<int>* indexes);
    // static UnityEngine.Vector2 SmallestVector2(UnityEngine.Vector2[] v, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x19C04B8
    static UnityEngine::Vector2 SmallestVector2(::Array<UnityEngine::Vector2>* v, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Vector2 LargestVector2(UnityEngine.Vector2[] v)
    // Offset: 0x19C084C
    static UnityEngine::Vector2 LargestVector2(::Array<UnityEngine::Vector2>* v);
    // static UnityEngine.Vector2 LargestVector2(UnityEngine.Vector2[] v, System.Int32[] indexes)
    // Offset: 0x19C08CC
    static UnityEngine::Vector2 LargestVector2(::Array<UnityEngine::Vector2>* v, ::Array<int>* indexes);
    // static UnityEngine.Vector2 LargestVector2(UnityEngine.Vector2[] v, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x19C096C
    static UnityEngine::Vector2 LargestVector2(::Array<UnityEngine::Vector2>* v, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Bounds GetBounds(UnityEngine.Vector3[] positions, System.Collections.Generic.IList`1<System.Int32> indices)
    // Offset: 0x19BA660
    static UnityEngine::Bounds GetBounds(::Array<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indices);
    // static UnityEngine.Bounds GetBounds(UnityEngine.Vector3[] positions, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x19C0D00
    static UnityEngine::Bounds GetBounds(::Array<UnityEngine::Vector3>* positions, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static private UnityEngine.Vector3 ComponentMin(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x19C1438
    static UnityEngine::Vector3 ComponentMin(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static private UnityEngine.Vector3 ComponentMax(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x19C152C
    static UnityEngine::Vector3 ComponentMax(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static UnityEngine.Bounds GetBounds(UnityEngine.Vector3[] positions, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x19C1620
    static UnityEngine::Bounds GetBounds(::Array<UnityEngine::Vector3>* positions, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public UnityEngine.Vector2 Average(System.Collections.Generic.IList`1<UnityEngine.Vector2> array, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x19C1B84
    static UnityEngine::Vector2 Average(System::Collections::Generic::IList_1<UnityEngine::Vector2>* array, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector3 Average(System.Collections.Generic.IList`1<UnityEngine.Vector3> array, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x19C1F6C
    static UnityEngine::Vector3 Average(System::Collections::Generic::IList_1<UnityEngine::Vector3>* array, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Vector3 Average(System.Collections.Generic.IList`1<T> list, System.Func`2<T,UnityEngine.Vector3> selector, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xFFFFFFFF
    template<class T>
    static UnityEngine::Vector3 Average(System::Collections::Generic::IList_1<T>* list, System::Func_2<T, UnityEngine::Vector3>* selector, System::Collections::Generic::IList_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Math::Average");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Math", "Average", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list, selector, indexes)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, selector, indexes);
    }
    // static public UnityEngine.Vector4 Average(System.Collections.Generic.IList`1<UnityEngine.Vector4> v, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x19C2564
    static UnityEngine::Vector4 Average(System::Collections::Generic::IList_1<UnityEngine::Vector4>* v, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Color Average(System.Collections.Generic.IList`1<UnityEngine.Color> c, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x19C2980
    static UnityEngine::Color Average(System::Collections::Generic::IList_1<UnityEngine::Color>* c, System::Collections::Generic::IList_1<int>* indexes);
    // static System.Boolean Approx2(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single delta)
    // Offset: 0x19C2D44
    static bool Approx2(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float delta);
    // static System.Boolean Approx3(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single delta)
    // Offset: 0x19C2E04
    static bool Approx3(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float delta);
    // static System.Boolean Approx4(UnityEngine.Vector4 a, UnityEngine.Vector4 b, System.Single delta)
    // Offset: 0x19C2EF8
    static bool Approx4(UnityEngine::Vector4 a, UnityEngine::Vector4 b, float delta);
    // static System.Boolean ApproxC(UnityEngine.Color a, UnityEngine.Color b, System.Single delta)
    // Offset: 0x19C301C
    static bool ApproxC(UnityEngine::Color a, UnityEngine::Color b, float delta);
    // static System.Boolean Approx(System.Single a, System.Single b, System.Single delta)
    // Offset: 0x19C3140
    static bool Approx(float a, float b, float delta);
    // static System.Int32 Wrap(System.Int32 value, System.Int32 lowerBound, System.Int32 upperBound)
    // Offset: 0x19C31C8
    static int Wrap(int value, int lowerBound, int upperBound);
    // static public System.Int32 Clamp(System.Int32 value, System.Int32 lowerBound, System.Int32 upperBound)
    // Offset: 0x19BD2D4
    static int Clamp(int value, int lowerBound, int upperBound);
    // static UnityEngine.Vector3 Clamp(UnityEngine.Vector3 value, UnityEngine.Vector3 lowerBound, UnityEngine.Vector3 upperBound)
    // Offset: 0x19C31F8
    static UnityEngine::Vector3 Clamp(UnityEngine::Vector3 value, UnityEngine::Vector3 lowerBound, UnityEngine::Vector3 upperBound);
    // static UnityEngine.Vector3 ToSignedMask(UnityEngine.Vector3 vec, System.Single delta)
    // Offset: 0x19C32C4
    static UnityEngine::Vector3 ToSignedMask(UnityEngine::Vector3 vec, float delta);
    // static UnityEngine.Vector3 Abs(UnityEngine.Vector3 v)
    // Offset: 0x19C3428
    static UnityEngine::Vector3 Abs(UnityEngine::Vector3 v);
    // static System.Int32 IntSum(UnityEngine.Vector3 mask)
    // Offset: 0x19C34D0
    static int IntSum(UnityEngine::Vector3 mask);
    // static System.Single Sum(UnityEngine.Vector3 v)
    // Offset: 0x19C3568
    static float Sum(UnityEngine::Vector3 v);
    // static System.Void Cross(UnityEngine.Vector3 a, UnityEngine.Vector3 b, ref System.Single x, ref System.Single y, ref System.Single z)
    // Offset: 0x19C35F4
    static void Cross(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float& x, float& y, float& z);
    // static System.Void Cross(UnityEngine.Vector3 a, UnityEngine.Vector3 b, ref UnityEngine.Vector3 res)
    // Offset: 0x19BED5C
    static void Cross(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3& res);
    // static System.Void Cross(System.Single ax, System.Single ay, System.Single az, System.Single bx, System.Single by, System.Single bz, ref System.Single x, ref System.Single y, ref System.Single z)
    // Offset: 0x19BEF8C
    static void Cross(float ax, float ay, float az, float bx, float by, float bz, float& x, float& y, float& z);
    // static System.Void Subtract(UnityEngine.Vector3 a, UnityEngine.Vector3 b, ref UnityEngine.Vector3 res)
    // Offset: 0x19BED44
    static void Subtract(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3& res);
    // static System.Int32 Min(System.Int32 a, System.Int32 b)
    // Offset: 0x19C3628
    static int Min(int a, int b);
    // static System.Int32 Max(System.Int32 a, System.Int32 b)
    // Offset: 0x19C3634
    static int Max(int a, int b);
    // static System.Boolean IsNumber(System.Single value)
    // Offset: 0x19C3640
    static bool IsNumber(float value);
    // static System.Boolean IsNumber(UnityEngine.Vector2 value)
    // Offset: 0x19C3684
    static bool IsNumber(UnityEngine::Vector2 value);
    // static System.Boolean IsNumber(UnityEngine.Vector3 value)
    // Offset: 0x19C36BC
    static bool IsNumber(UnityEngine::Vector3 value);
    // static System.Boolean IsNumber(UnityEngine.Vector4 value)
    // Offset: 0x19C3704
    static bool IsNumber(UnityEngine::Vector4 value);
    // static System.Single MakeNonZero(System.Single value, System.Single min)
    // Offset: 0x19C3768
    static float MakeNonZero(float value, float min);
  }; // UnityEngine.ProBuilder.Math
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Math*, "UnityEngine.ProBuilder", "Math");
