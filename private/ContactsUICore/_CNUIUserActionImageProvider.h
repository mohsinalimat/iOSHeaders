//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionImageProvider-Protocol.h>

@class NSString;

@interface _CNUIUserActionImageProvider : NSObject <CNUIUserActionImageProvider>
{
}

+ (id)uncachedImageForResource:(id)arg1;
+ (id)imageForResource:(id)arg1;
+ (id)imageResourceVariantNameForImageStyle:(long long)arg1;
+ (id)imageResourceBaseNameForActionType:(id)arg1;
+ (id)imageResourceNameForActionType:(id)arg1 style:(long long)arg2;
+ (id)imageForActionType:(id)arg1 imageStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

