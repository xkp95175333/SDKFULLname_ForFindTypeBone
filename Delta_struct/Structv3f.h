	// ScriptStruct CoreUObject.Vector
	// 0x000C (0x000C - 0x0000)
	struct FVector
	{
	public:
		using UnderlayingType = float;

		float                                         X;                                                 // 0x0000(0x0004)
		float                                         Y;                                                 // 0x0004(0x0004)
		float                                         Z;                                                 // 0x0008(0x0004)

	public:
		constexpr FVector(UnderlayingType X = 0, UnderlayingType Y = 0, UnderlayingType Z = 0)
			: X(X), Y(Y), Z(Z)
		{
		}
		constexpr FVector(const FVector& other)
			: X(other.X), Y(other.Y), Z(other.Z)
		{
		}
		FVector& Normalize()
		{
			*this /= Magnitude();

			return *this;
		}
		FVector& operator*=(UnderlayingType Scalar)
		{
			*this = *this * Scalar;

			return *this;
		}
		FVector& operator*=(const FVector& Other)
		{
			*this = *this * Other;

			return *this;
		}
		FVector& operator+=(const FVector& Other)
		{
			*this = *this + Other;

			return *this;
		}
		FVector& operator-=(const FVector& Other)
		{
			*this = *this - Other;

			return *this;
		}
		FVector& operator/=(UnderlayingType Scalar)
		{
			*this = *this / Scalar;

			return *this;
		}
		FVector& operator/=(const FVector& Other)
		{
			*this = *this / Other;

			return *this;
		}
		FVector& operator=(const FVector& other)
		{
			X = other.X;
			Y = other.Y;
			Z = other.Z;

			return *this;
		}

		UnderlayingType Dot(const FVector& Other) const
		{
			return (X * Other.X) + (Y * Other.Y) + (Z * Other.Z);
		}
		UnderlayingType GetDistanceTo(const FVector& Other) const
		{
			FVector DiffVector = Other - *this;

			return DiffVector.Magnitude();
		}
		UnderlayingType GetDistanceToInMeters(const FVector& Other) const
		{
			return GetDistanceTo(Other) * static_cast<UnderlayingType>(0.01);
		}
		FVector GetNormalized() const
		{
			return *this / Magnitude();
		}
		bool IsZero() const
		{
			return X == 0 && Y == 0 && Z == 0;
		}
		UnderlayingType Magnitude() const
		{
			return std::sqrt((X * X) + (Y * Y) + (Z * Z));
		}
		bool operator!=(const FVector& Other) const
		{
			return X != Other.X || Y != Other.Y || Z != Other.Z;
		}
		FVector operator*(UnderlayingType Scalar) const
		{
			return { X * Scalar, Y * Scalar, Z * Scalar };
		}
		FVector operator*(const FVector& Other) const
		{
			return { X * Other.X, Y * Other.Y, Z * Other.Z };
		}
		FVector operator+(const FVector& Other) const
		{
			return { X + Other.X, Y + Other.Y, Z + Other.Z };
		}
		FVector operator-(const FVector& Other) const
		{
			return { X - Other.X, Y - Other.Y, Z - Other.Z };
		}
		FVector operator/(UnderlayingType Scalar) const
		{
			if (Scalar == 0)
				return *this;

			return { X / Scalar, Y / Scalar, Z / Scalar };
		}
		FVector operator/(const FVector& Other) const
		{
			if (Other.X == 0 || Other.Y == 0 || Other.Z == 0)
				return *this;

			return { X / Other.X, Y / Other.Y, Z / Other.Z };
		}
		bool operator==(const FVector& Other) const
		{
			return X == Other.X && Y == Other.Y && Z == Other.Z;
		}
	};
// ScriptStruct CoreUObject.Rotator
// 0x000C (0x000C - 0x0000)
struct FRotator
{
public:
	using UnderlayingType = float;

	float                                         Pitch;                                             // 0x0000(0x0004)
	float                                         Yaw;                                               // 0x0004(0x0004)
	float                                         Roll;                                              // 0x0008(0x0004)

public:
	static UnderlayingType ClampAxis(UnderlayingType Angle)
	{
		Angle = std::fmod(Angle, static_cast<UnderlayingType>(360));
		if (Angle < static_cast<UnderlayingType>(0))
			Angle += static_cast<UnderlayingType>(360);

		return Angle;
	}
	static UnderlayingType NormalizeAxis(UnderlayingType Angle)
	{
		Angle = ClampAxis(Angle);
		if (Angle > static_cast<UnderlayingType>(180))
			Angle -= static_cast<UnderlayingType>(360);

		return Angle;
	}

	FRotator& Clamp()
	{
		Pitch = ClampAxis(Pitch);
		Yaw = ClampAxis(Yaw);
		Roll = ClampAxis(Roll);

		return *this;
	}
	constexpr FRotator(UnderlayingType Pitch = 0, UnderlayingType Yaw = 0, UnderlayingType Roll = 0)
		: Pitch(Pitch), Yaw(Yaw), Roll(Roll)
	{
	}
	constexpr FRotator(const FRotator& other)
		: Pitch(other.Pitch), Yaw(other.Yaw), Roll(other.Roll)
	{
	}
	FRotator& Normalize()
	{
		Pitch = NormalizeAxis(Pitch);
		Yaw = NormalizeAxis(Yaw);
		Roll = NormalizeAxis(Roll);

		return *this;
	}
	FRotator& operator*=(UnderlayingType Scalar)
	{
		*this = *this * Scalar;

		return *this;
	}
	FRotator& operator*=(const FRotator& Other)
	{
		*this = *this * Other;

		return *this;
	}
	FRotator& operator+=(const FRotator& Other)
	{
		*this = *this + Other;

		return *this;
	}
	FRotator& operator-=(const FRotator& Other)
	{
		*this = *this - Other;

		return *this;
	}
	FRotator& operator/=(UnderlayingType Scalar)
	{
		*this = *this / Scalar;

		return *this;
	}
	FRotator& operator/=(const FRotator& Other)
	{
		*this = *this / Other;

		return *this;
	}
	FRotator& operator=(const FRotator& other)
	{
		Pitch = other.Pitch;
		Yaw = other.Yaw;
		Roll = other.Roll;

		return *this;
	}

	FRotator GetNormalized() const
	{
		FRotator rotator = *this;
		rotator.Normalize();

		return rotator;
	}
	bool IsZero() const
	{
		return ClampAxis(Pitch) == 0 && ClampAxis(Yaw) == 0 && ClampAxis(Roll) == 0;
	}
	bool operator!=(const FRotator& Other) const
	{
		return Pitch != Other.Pitch || Yaw != Other.Yaw || Roll != Other.Roll;
	}
	FRotator operator*(UnderlayingType Scalar) const
	{
		return { Pitch * Scalar, Yaw * Scalar, Roll * Scalar };
	}
	FRotator operator*(const FRotator& Other) const
	{
		return { Pitch * Other.Pitch, Yaw * Other.Yaw, Roll * Other.Roll };
	}
	FRotator operator+(const FRotator& Other) const
	{
		return { Pitch + Other.Pitch, Yaw + Other.Yaw, Roll + Other.Roll };
	}
	FRotator operator-(const FRotator& Other) const
	{
		return { Pitch - Other.Pitch, Yaw - Other.Yaw, Roll - Other.Roll };
	}
	FRotator operator/(UnderlayingType Scalar) const
	{
		if (Scalar == 0)
			return *this;

		return { Pitch / Scalar, Yaw / Scalar, Roll / Scalar };
	}
	FRotator operator/(const FRotator& Other) const
	{
		if (Other.Pitch == 0 || Other.Yaw == 0 || Other.Roll == 0)
			return *this;

		return { Pitch / Other.Pitch, Yaw / Other.Yaw, Roll / Other.Roll };
	}
	bool operator==(const FRotator& Other) const
	{
		return Pitch == Other.Pitch && Yaw == Other.Yaw && Roll == Other.Roll;
	}
};



//CoreDEf 
class Vector3
{
public:
	float x, y, z;

	Vector3() : x(0.f), y(0.f), z(0.f) {}
	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	~Vector3() {}

	inline float Dot(const Vector3& v) const
	{
		return x * v.x + y * v.y + z * v.z;
	}

	inline float Distance(const Vector3& v) const
	{
		return sqrtf(powf(v.x - x, 2.0f) + powf(v.y - y, 2.0f) + powf(v.z - z, 2.0f));
	}

	inline Vector3 operator+(const Vector3& v) const
	{
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	inline Vector3 operator-(const Vector3& v) const
	{
		return Vector3(x - v.x, y - v.y, z - v.z);
	}

	inline float Length() const
	{
		return sqrtf((x * x) + (y * y) + (z * z));
	}
};

 //อันเก่า
XMMATRIX MatrixMultiplicationeeeee(XMMATRIX pM1, XMMATRIX pM2)
{
	XMMATRIX pOut;
	pOut.r[0].m128_f32[0] = pM1.r[0].m128_f32[0] * pM2.r[0].m128_f32[0] + pM1.r[0].m128_f32[1] * pM2.r[1].m128_f32[0] + pM1.r[0].m128_f32[2] * pM2.r[2].m128_f32[0] + pM1.r[0].m128_f32[3] * pM2.r[3].m128_f32[0];
	pOut.r[0].m128_f32[1] = pM1.r[0].m128_f32[0] * pM2.r[0].m128_f32[1] + pM1.r[0].m128_f32[1] * pM2.r[1].m128_f32[1] + pM1.r[0].m128_f32[2] * pM2.r[2].m128_f32[1] + pM1.r[0].m128_f32[3] * pM2.r[3].m128_f32[1];
	pOut.r[0].m128_f32[2] = pM1.r[0].m128_f32[0] * pM2.r[0].m128_f32[2] + pM1.r[0].m128_f32[1] * pM2.r[1].m128_f32[2] + pM1.r[0].m128_f32[2] * pM2.r[2].m128_f32[2] + pM1.r[0].m128_f32[3] * pM2.r[3].m128_f32[2];
	pOut.r[0].m128_f32[3] = pM1.r[0].m128_f32[0] * pM2.r[0].m128_f32[3] + pM1.r[0].m128_f32[1] * pM2.r[1].m128_f32[3] + pM1.r[0].m128_f32[2] * pM2.r[2].m128_f32[3] + pM1.r[0].m128_f32[3] * pM2.r[3].m128_f32[3];

	pOut.r[1].m128_f32[0] = pM1.r[1].m128_f32[0] * pM2.r[0].m128_f32[0] + pM1.r[1].m128_f32[1] * pM2.r[1].m128_f32[0] + pM1.r[1].m128_f32[2] * pM2.r[2].m128_f32[0] + pM1.r[1].m128_f32[3] * pM2.r[3].m128_f32[0];
	pOut.r[1].m128_f32[1] = pM1.r[1].m128_f32[0] * pM2.r[0].m128_f32[1] + pM1.r[1].m128_f32[1] * pM2.r[1].m128_f32[1] + pM1.r[1].m128_f32[2] * pM2.r[2].m128_f32[1] + pM1.r[1].m128_f32[3] * pM2.r[3].m128_f32[1];
	pOut.r[1].m128_f32[2] = pM1.r[1].m128_f32[0] * pM2.r[0].m128_f32[2] + pM1.r[1].m128_f32[1] * pM2.r[1].m128_f32[2] + pM1.r[1].m128_f32[2] * pM2.r[2].m128_f32[2] + pM1.r[1].m128_f32[3] * pM2.r[3].m128_f32[2];
	pOut.r[1].m128_f32[3] = pM1.r[1].m128_f32[0] * pM2.r[0].m128_f32[3] + pM1.r[1].m128_f32[1] * pM2.r[1].m128_f32[3] + pM1.r[1].m128_f32[2] * pM2.r[2].m128_f32[3] + pM1.r[1].m128_f32[3] * pM2.r[3].m128_f32[3];

	pOut.r[2].m128_f32[0] = pM1.r[2].m128_f32[0] * pM2.r[0].m128_f32[0] + pM1.r[2].m128_f32[1] * pM2.r[1].m128_f32[0] + pM1.r[2].m128_f32[2] * pM2.r[2].m128_f32[0] + pM1.r[2].m128_f32[3] * pM2.r[3].m128_f32[0];
	pOut.r[2].m128_f32[1] = pM1.r[2].m128_f32[0] * pM2.r[0].m128_f32[1] + pM1.r[2].m128_f32[1] * pM2.r[1].m128_f32[1] + pM1.r[2].m128_f32[2] * pM2.r[2].m128_f32[1] + pM1.r[2].m128_f32[3] * pM2.r[3].m128_f32[1];
	pOut.r[2].m128_f32[2] = pM1.r[2].m128_f32[0] * pM2.r[0].m128_f32[2] + pM1.r[2].m128_f32[1] * pM2.r[1].m128_f32[2] + pM1.r[2].m128_f32[2] * pM2.r[2].m128_f32[2] + pM1.r[2].m128_f32[3] * pM2.r[3].m128_f32[2];
	pOut.r[2].m128_f32[3] = pM1.r[2].m128_f32[0] * pM2.r[0].m128_f32[3] + pM1.r[2].m128_f32[1] * pM2.r[1].m128_f32[3] + pM1.r[2].m128_f32[2] * pM2.r[2].m128_f32[3] + pM1.r[2].m128_f32[3] * pM2.r[3].m128_f32[3];

	pOut.r[3].m128_f32[0] = pM1.r[3].m128_f32[0] * pM2.r[0].m128_f32[0] + pM1.r[3].m128_f32[1] * pM2.r[1].m128_f32[0] + pM1.r[3].m128_f32[2] * pM2.r[2].m128_f32[0] + pM1.r[3].m128_f32[3] * pM2.r[3].m128_f32[0];
	pOut.r[3].m128_f32[1] = pM1.r[3].m128_f32[0] * pM2.r[0].m128_f32[1] + pM1.r[3].m128_f32[1] * pM2.r[1].m128_f32[1] + pM1.r[3].m128_f32[2] * pM2.r[2].m128_f32[1] + pM1.r[3].m128_f32[3] * pM2.r[3].m128_f32[1];
	pOut.r[3].m128_f32[2] = pM1.r[3].m128_f32[0] * pM2.r[0].m128_f32[2] + pM1.r[3].m128_f32[1] * pM2.r[1].m128_f32[2] + pM1.r[3].m128_f32[2] * pM2.r[2].m128_f32[2] + pM1.r[3].m128_f32[3] * pM2.r[3].m128_f32[2];
	pOut.r[3].m128_f32[3] = pM1.r[3].m128_f32[0] * pM2.r[0].m128_f32[3] + pM1.r[3].m128_f32[1] * pM2.r[1].m128_f32[3] + pM1.r[3].m128_f32[2] * pM2.r[2].m128_f32[3] + pM1.r[3].m128_f32[3] * pM2.r[3].m128_f32[3];

	return pOut;
}



#define M_PI	3.14159265358979323846264338327950288419716939937510

#define M_PI	3.14159265358979323846264338327950288419716939937510
XMMATRIX ToMatrix(Vector3 Rotation, Vector3 origin = Vector3(0, 0, 0));
XMMATRIX ToMatrix(Vector3 Rotation, Vector3 origin)
{
	float Pitch = (Rotation.x * float(M_PI) / 180.f);
	float Yaw = (Rotation.y * float(M_PI) / 180.f);
	float Roll = (Rotation.z * float(M_PI) / 180.f);

	float SP = sinf(Pitch);
	float CP = cosf(Pitch);
	float SY = sinf(Yaw);
	float CY = cosf(Yaw);
	float SR = sinf(Roll);
	float CR = cosf(Roll);

	XMMATRIX Matrix;
	Matrix.r[0].m128_f32[0] = CP * CY;
	Matrix.r[0].m128_f32[1] = CP * SY;
	Matrix.r[0].m128_f32[2] = SP;
	Matrix.r[0].m128_f32[3] = 0.f;

	Matrix.r[1].m128_f32[0] = SR * SP * CY - CR * SY;
	Matrix.r[1].m128_f32[1] = SR * SP * SY + CR * CY;
	Matrix.r[1].m128_f32[2] = -SR * CP;
	Matrix.r[1].m128_f32[3] = 0.f;

	Matrix.r[2].m128_f32[0] = -(CR * SP * CY + SR * SY);
	Matrix.r[2].m128_f32[1] = CY * SR - CR * SP * SY;
	Matrix.r[2].m128_f32[2] = CR * CP;
	Matrix.r[2].m128_f32[3] = 0.f;

	Matrix.r[3].m128_f32[0] = origin.x;
	Matrix.r[3].m128_f32[1] = origin.y;
	Matrix.r[3].m128_f32[2] = origin.z;
	Matrix.r[3].m128_f32[3] = 1.f;

	return Matrix;
}

XMMATRIX Matrix(FRotator rot, Vector3 origin = Vector3(0, 0, 0))
{
	float radPitch = (rot.x * float(M_PI) / 180.f);
	float radYaw = (rot.y * float(M_PI) / 180.f);
	float radRoll = (rot.z * float(M_PI) / 180.f);

	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);

	XMMATRIX matrix;
	matrix.r[0].m128_f32[0] = CP * CY;
	matrix.r[0].m128_f32[1] = CP * SY;
	matrix.r[0].m128_f32[2] = SP;
	matrix.r[0].m128_f32[3] = 0.f;

	matrix.r[1].m128_f32[0] = SR * SP * CY - CR * SY;
	matrix.r[1].m128_f32[1] = SR * SP * SY + CR * CY;
	matrix.r[1].m128_f32[2] = -SR * CP;
	matrix.r[1].m128_f32[3] = 0.f;

	matrix.r[2].m128_f32[0] = -(CR * SP * CY + SR * SY);
	matrix.r[2].m128_f32[1] = CY * SR - CR * SP * SY;
	matrix.r[2].m128_f32[2] = CR * CP;
	matrix.r[2].m128_f32[3] = 0.f;

	matrix.r[3].m128_f32[0] = origin.x;
	matrix.r[3].m128_f32[1] = origin.y;
	matrix.r[3].m128_f32[2] = origin.z;
	matrix.r[3].m128_f32[3] = 1.f;

	return matrix;
}
