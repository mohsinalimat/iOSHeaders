//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface AXSwitchRecipe : NSObject
{
    NSString *_name;
    NSUUID *_uuid;
    NSArray *_mappings;
    double _timeout;
    NSString *_unlocalizedName;
    NSString *_menuIconIdentifier;
}

+ (id)recipeWithDictionaryRepresentation:(id)arg1;
@property(copy, nonatomic) NSString *menuIconIdentifier; // @synthesize menuIconIdentifier=_menuIconIdentifier;
@property(retain, nonatomic) NSString *unlocalizedName; // @synthesize unlocalizedName=_unlocalizedName;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSArray *mappings; // @synthesize mappings=_mappings;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool shouldContinueScanning;
- (void)dealloc;
- (id)init;
- (id)dictionaryRepresentation;

@end

