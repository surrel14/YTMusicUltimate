#import <UIKit/UIKit.h>

@interface YTActionSheetAction : NSObject
+ (instancetype)actionWithTitle:(NSString *)title iconImage:(UIImage *)image style:(NSInteger)style handler:(void (^)(void))handler;
+ (instancetype)actionWithTitle:(NSString *)title iconImage:(UIImage *)image  secondaryIconImage:(UIImage *)secondaryIconImage  accessibilityIdentifier:(NSString *)accessibilityIdentifier handler:(void (^)(void))handler; 
@end