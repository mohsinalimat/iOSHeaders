//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKTextAttributesUserInterfaceItem-Protocol.h>
#import <AnnotationKit/AKUserInterfaceItem-Protocol.h>

@class AKTextAttributesViewController, NSString;

@interface AKTextAttributesUIItemDelegate : NSObject <AKUserInterfaceItem, AKTextAttributesUserInterfaceItem>
{
    AKTextAttributesViewController *_parentController;
}

@property __weak AKTextAttributesViewController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)syncTextAttributesToUI:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (long long)tag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

