//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CLSChecklist : NSObject
{
    NSString *_checklistName;
    NSString *_serviceName;
    NSArray *_items;
}

+ (id)checklistWithName:(id)arg1 serviceName:(id)arg2 items:(id)arg3;
+ (id)checklist;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *checklistName; // @synthesize checklistName=_checklistName;
- (void).cxx_destruct;
- (id)allItems;

@end

