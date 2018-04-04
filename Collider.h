#ifndef __COLLIDER_H__
#define __COLLIDER_H__

namespace GameDev2D
{
    namespace Physics
    {
		class Body;
        enum ColliderType
        {
            ColliderType_Circle,
            ColliderType_Box
        };


        class Collider
        {
        public:
            Collider();
            virtual ~Collider();

            virtual ColliderType GetType() = 0;

            virtual float ComputeMass(float density) = 0;
            virtual float ComputeInertia(float mass) = 0;
			void SetBody(Body* body);
			Body* GetBody();
            void SetAngle(float angleInRadians);
            float GetAngle();

        private:
			Body* m_body;
            float m_Angle;
        };
    }
}


#endif