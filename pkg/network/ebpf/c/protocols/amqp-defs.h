#ifndef __AMQP_DEFS_H
#define __AMQP_DEFS_H

// RabbitMQ supported classes.
// Ref: https://www.rabbitmq.com/resources/specs/amqp0-9-1.pdf
#define AMQP_CONNECTION_CLASS 10
#define AMQP_BASIC_CLASS 60

// RabbitMQ supported connections.
#define AMQP_METHOD_CONNECTION_START 10
#define AMQP_METHOD_CONNECTION_START_OK 11

// RabbitMQ supported methods types.
#define AMQP_METHOD_CONSUME 20
#define AMQP_METHOD_PUBLISH 40
#define AMQP_METHOD_DELIVER 60
#define AMQP_FRAME_METHOD_TYPE 1

#define AMQP_MIN_FRAME_LENGTH 8
#define AMQP_MIN_PAYLOAD_LENGTH 11

#endif
