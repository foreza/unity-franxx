//
//  ASAdProvider.h
//  AerServSDK
//
//  Created by Albert Zhu on 2/27/17.
//  Copyright © 2017 AerServ, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString* const kProviderIDKey;
extern NSString* const kProviderDefaultKeyAerMarket;

// SDKv2 Keys
extern NSString* const kAdsKey;
extern NSString* const kAdMarkupKey;
extern NSString* const kAdContentTypeKey;
extern NSString* const kAdTimeoutKey;

typedef NS_ENUM(NSInteger, ASProviderState) {
    kProviderStateUnloaded = 0,
    kProviderStateLoading,
    kProviderStateReady,
    kProviderStateFailed,
    kProviderStatePlaying
};

@class ASProviderSettings;
@class ASTransactionInfo;

@interface ASAdProvider : NSObject

@property (nonatomic, assign) ASProviderState state;
@property (nonatomic, strong) NSString* key;
@property (nonatomic, strong) ASProviderSettings* settings;

- (void)cancel;

@end
