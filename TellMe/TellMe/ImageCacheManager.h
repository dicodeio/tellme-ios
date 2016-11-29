
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^DownloadCompletion)(BOOL seccess, UIImage *image, NSString *imageURL);

@interface ImageCacheManager : NSObject

+ (instancetype)shareInstance;

- (void)downloadImageUsingNSURLSessionWithURL:(NSString *)url completion:(DownloadCompletion)completion;
- (void)downloadImageUsingNSDataWithURL:(NSString *)url completion:(DownloadCompletion)completion;

@end
