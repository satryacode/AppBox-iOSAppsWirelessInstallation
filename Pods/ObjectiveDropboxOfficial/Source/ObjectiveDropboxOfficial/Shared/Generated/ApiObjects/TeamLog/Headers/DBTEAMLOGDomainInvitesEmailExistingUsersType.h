///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDomainInvitesEmailExistingUsersType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DomainInvitesEmailExistingUsersType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDomainInvitesEmailExistingUsersType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *description_;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param description_ (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithDescription_:(NSString *)description_;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DomainInvitesEmailExistingUsersType`
/// struct.
///
@interface DBTEAMLOGDomainInvitesEmailExistingUsersTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGDomainInvitesEmailExistingUsersType` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDomainInvitesEmailExistingUsersType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainInvitesEmailExistingUsersType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDomainInvitesEmailExistingUsersType *)instance;

///
/// Deserializes `DBTEAMLOGDomainInvitesEmailExistingUsersType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainInvitesEmailExistingUsersType` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGDomainInvitesEmailExistingUsersType` object.
///
+ (DBTEAMLOGDomainInvitesEmailExistingUsersType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
