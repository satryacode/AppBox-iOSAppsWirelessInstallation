///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESDownloadZipArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DownloadZipArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESDownloadZipArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path of the folder to download.
@property (nonatomic, readonly, copy) NSString *path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path of the folder to download.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DownloadZipArg` struct.
///
@interface DBFILESDownloadZipArgSerializer : NSObject

///
/// Serializes `DBFILESDownloadZipArg` instances.
///
/// @param instance An instance of the `DBFILESDownloadZipArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESDownloadZipArg` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESDownloadZipArg *)instance;

///
/// Deserializes `DBFILESDownloadZipArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESDownloadZipArg` API object.
///
/// @return An instantiation of the `DBFILESDownloadZipArg` object.
///
+ (DBFILESDownloadZipArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END