//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FPFSHelpers)
- (id)fp_withReadWriteAccess:(CDUnknownBlockType)arg1;
- (_Bool)fp_deleteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)fp_createSubFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_renameWithNewName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_reparentUnderFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_importUnderFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)fp_existingURLOfChildWithName:(id)arg1;
@end

