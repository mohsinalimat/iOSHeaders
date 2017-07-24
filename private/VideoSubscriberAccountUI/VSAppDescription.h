//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VSAppDescription : NSObject
{
    NSString *_displayName;
    NSNumber *_adamID;
    NSString *_buyParams;
    NSString *_bundleID;
    UIImage *_icon;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(copy, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

