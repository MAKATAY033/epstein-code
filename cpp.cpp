#include <print>
#include <thread>
#include <memory>
#include <string>
#include <chrono>
using namespace std::this_thread;
using namespace std::chrono;
static thread_local std::string epstein_files;
namespace human {
	auto is_it_a_nigger = true;
	bool arrest;
	class nig
	{
	public:
		inline auto should_we_make_this_nigger_die() -> void
		{
			(human::arrest ? std::println("nigger has been executed") : std::println("yc detected"));
		}
		~nig()
		{
			std::println("jews be jewin bitches be bitching");
		}
		static inline auto save_copy_in_trumps_stash(std::string oil_documents) -> void
		{
			std::println("using israel gpt to decode redacted msg");
			std::byte b{ 0x43 };
			sleep_for(milliseconds(std::to_integer<int>(b)));
			epstein_files = "bill clinton getting triple t teeth special from trump";
		}
		inline auto sign_executive_order_to_release_epstein_files() -> void
		{
			epstein_files = "redacted shit";
			std::thread operation_diddy(save_copy_in_trumps_stash, epstein_files);
			std::println("{}", epstein_files);
			operation_diddy.join();
		}
	};
}
auto curry_balls = std::make_unique<human::nig>();
auto main() -> int
{
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
													{
														{
															{
																{
																	(human::is_it_a_nigger ? human::arrest = true : human::arrest = false);
																	curry_balls->should_we_make_this_nigger_die();
																	curry_balls->sign_executive_order_to_release_epstein_files();
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
