//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQPProcessorFactory : NSObject
{
}

+ (id)retainedProcessorForDocument:(struct __CFURL *)arg1 zipArchive:(id)arg2 uti:(struct __CFString *)arg3 outputType:(int)arg4 outputPath:(struct __CFString *)arg5 previewRequest:(struct __QLPreviewRequest *)arg6 progressiveHelper:(id)arg7;
+ (id)retainedProcessorForDocument:(struct __CFURL *)arg1 zipArchive:(id)arg2 uti:(struct __CFString *)arg3 outputType:(int)arg4 outputPath:(struct __CFString *)arg5 previewRequest:(struct __QLPreviewRequest *)arg6 progressiveHelper:(id)arg7 cryptoKey:(id)arg8;
+ (int)applicationForDocumentUti:(struct __CFString *)arg1;
+ (struct __CFString *)createUtiForDocument:(struct __CFString *)arg1;
+ (struct __CFURL *)newEmbeddedSageUrlForTangierDocumentUrl:(struct __CFURL *)arg1 uti:(struct __CFString *)arg2 isBundle:(_Bool *)arg3;
+ (_Bool)isTemplateUti:(struct __CFString *)arg1;
+ (_Bool)isTangierTEFDocumentUti:(struct __CFString *)arg1;

@end

